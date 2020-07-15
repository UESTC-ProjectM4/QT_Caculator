#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stack>
#include <vector>
#include <stdlib.h>
#include <qstring.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString inputstr = "",recordText = ""; //�����ֶκͼ�¼�ֶ�
bool opFlag = true;    //��ֹ����������
bool errorFlag = false; //����flag������������밴���
bool clearFlag = false;
//std::stack<double> inputNum;
//std::stack<int> operatorID;

std::vector<double> inputNum;   //�Ӽ������ջ
std::vector<int> operatorID;    //����ջ,1�� 2�� 3��

/**
  * @date 2020/7/9 @author marktlen
  * @brief ���ְ�ť
 */

void MainWindow::on__1_pushButton_clicked()
{
    if(opFlag == true)
    {
        inputstr = "";
    }
    opFlag = false;
    inputstr += "1";
    inputTextDisplay();
}

void MainWindow::on__2_pushButton_clicked()
{
    if(opFlag == true)
    {
        inputstr = "";
    }
    opFlag = false;
    inputstr += "2";
    inputTextDisplay();
}

void MainWindow::on__3_pushButton_clicked()
{
    if(opFlag == true)
    {
        inputstr = "";
    }
    opFlag = false;
    inputstr += "3";
    inputTextDisplay();
}

void MainWindow::on__4_pushButton_clicked()
{
    if(opFlag == true)
    {
        inputstr = "";
    }
    opFlag = false;
    inputstr += "4";
    inputTextDisplay();
}

void MainWindow::on__5_pushButton_clicked()
{
    if(opFlag == true)
    {
        inputstr = "";
    }
    opFlag = false;
    inputstr += "5";
    inputTextDisplay();
}

void MainWindow::on__6_pushButton_clicked()
{
    if(opFlag == true)
    {
        inputstr = "";
    }
    opFlag = false;
    inputstr += "6";
    inputTextDisplay();
}

void MainWindow::on__7_pushButton_clicked()
{
    if(opFlag == true)
    {
        inputstr = "";
    }
    opFlag = false;
    inputstr += "7";
    inputTextDisplay();
}

void MainWindow::on__8_pushButton_clicked()
{
    if(opFlag == true)
    {
        inputstr = "";
    }
    opFlag = false;
    inputstr += "8";
    inputTextDisplay();
}

void MainWindow::on__9_pushButton_clicked()
{
    if(opFlag == true)
    {
        inputstr = "";
    }
    opFlag = false;
    inputstr += "9";
    inputTextDisplay();
}

void MainWindow::on_pushButton_0_clicked()
{
    if(opFlag == true)
    {
        inputstr = "";
    }
    opFlag = false;
    inputstr += "0";
    inputTextDisplay();
}

void MainWindow::on_decimal_pushButton_clicked()
{
    if(opFlag == false)
    {
        inputstr += ".";
        inputTextDisplay();
    }
}

/**
  * @date 2020/7/9 @author marktlen
  * @brief ������������ʾ����
  */
void MainWindow::inputTextDisplay()
{
    ui->input_lineEdit->setText(inputstr);
}
void MainWindow::recordTextDisplay()
{
    ui->record_lineEdit->setText(recordText);
}


void MainWindow::on_input_lineEdit_editingFinished()
{
    bool successFlag; //ת���ɹ����
    ui->input_lineEdit->text().toDouble(&successFlag);
    // �ܷ�ɹ�ת��Ϊdouble����
    if(successFlag)
    {
        inputstr = ui->input_lineEdit->text();
    }
    else
    {
        ui->input_lineEdit->text() = QString("�������");
        errorFlag = true;
        errorButtonLocker();
    }
}

/**
  * @date 2020/7/9 @author marktlen
  * @brief ����ʱ�رհ�ť
  */
void MainWindow::errorButtonLocker()
{
    ui->_1_pushButton->setEnabled(false);
    ui->_2_pushButton->setEnabled(false);
    ui->_3_pushButton->setEnabled(false);
    ui->_4_pushButton->setEnabled(false);
    ui->_5_pushButton->setEnabled(false);
    ui->_6_pushButton->setEnabled(false);
    ui->_7_pushButton->setEnabled(false);
    ui->_8_pushButton->setEnabled(false);
    ui->_9_pushButton->setEnabled(false);
    ui->pushButton_0->setEnabled(false);
    ui->_1_pushButton->setEnabled(false);
    ui->decimal_pushButton->setEnabled(false);
    ui->add_pushButton->setEnabled(false);
    ui->sub_pushButton->setEnabled(false);
    ui->time_pushButton->setEnabled(false);
    ui->div_pushButton->setEnabled(false);
    ui->del_pushButton->setEnabled(false);
    ui->equal_pushButton->setEnabled(false);
}

void MainWindow::errorButtonUnlocker()
{

    ui->_1_pushButton->setEnabled(true);
    ui->_2_pushButton->setEnabled(true);
    ui->_3_pushButton->setEnabled(true);
    ui->_4_pushButton->setEnabled(true);
    ui->_5_pushButton->setEnabled(true);
    ui->_6_pushButton->setEnabled(true);
    ui->_7_pushButton->setEnabled(true);
    ui->_8_pushButton->setEnabled(true);
    ui->_9_pushButton->setEnabled(true);
    ui->pushButton_0->setEnabled(true);
    ui->_1_pushButton->setEnabled(true);
    ui->decimal_pushButton->setEnabled(true);
    ui->add_pushButton->setEnabled(true);
    ui->sub_pushButton->setEnabled(true);
    ui->time_pushButton->setEnabled(true);
    ui->div_pushButton->setEnabled(true);
    ui->del_pushButton->setEnabled(true);
    ui->equal_pushButton->setEnabled(true);
}

/**
  * @date 2020/7/9 @author marktlen
  * @brief �����������
  */

void MainWindow::on_cleanInput_pushButton_clicked()
{
    opFlag = true;
    inputstr = "";
    inputTextDisplay();
}

double MainWindow::sumStackNum()
{
    int vetSize = inputNum.size();
    int i =0;
    double result;
    for(i = 0;i < vetSize;i++)
    {
        result += inputNum[i];
    }
    return result;
}

double MainWindow::heigOp(double inputDouble)
{
    if(operatorID.back() == 1)
    {
        double temp = inputNum.back();
        temp = temp * inputDouble;
        inputNum.pop_back();
        inputNum.push_back(temp);
        operatorID.pop_back();
        return temp;
    }
    else if(operatorID.back() == 2)
    {
        double temp = inputNum.back();
        if(temp != 0) //��ֹ���
        {
            temp = temp / inputDouble;
            inputNum.pop_back();
            inputNum.push_back(temp);
        }
        else
        {
            errorFlag = true;
            inputstr = QString("�������");
            errorButtonLocker();
        }
        operatorID.pop_back();
        return temp;
    }
    else
    {
        int temp = (int)inputNum.back();
        temp = temp % (int)inputDouble;
        inputNum.pop_back();
        inputNum.push_back(temp);
        operatorID.pop_back();
        return temp;
    }

}

/**
  * @date 2020/7/9 @author marktlen
  * @brief �Ӽ���ťʵ��
  */
void MainWindow::on_add_pushButton_clicked()
{
    if(opFlag == false)
    {
        opFlag = true;
        bool successFlag; //ת���ɹ����
        double inputDouble =  ui->input_lineEdit->text().toDouble(&successFlag);
        QString tempStr;
        // �ܷ�ɹ�ת��Ϊdouble����
        if(successFlag)
        {
            //��¼����ʾ
            inputstr = ui->input_lineEdit->text();
            recordText += inputstr + "+";
            recordTextDisplay();
            if(operatorID.empty() == true) //��δ����ĸ߽�����
            {
                //������ջ
                inputNum.push_back(inputDouble);
                inputstr =  tempStr.number( sumStackNum(),'f',3);
                inputTextDisplay();
            }
            else
            {
                //���и����ȼ��������
                tempStr.number(heigOp(inputDouble),'f',3);
                inputstr =  tempStr.number( sumStackNum(),'f',3);
                inputTextDisplay();
            }
        }
        else
        {
            ui->input_lineEdit->text() = QString("�������");
            errorFlag = true;
            errorButtonLocker();
        }
    }
}

void MainWindow::on_sub_pushButton_clicked()
{
    if(opFlag == false)
    {
        opFlag = true;
        bool successFlag; //ת���ɹ����
        double inputDouble =  ui->input_lineEdit->text().toDouble(&successFlag);
        QString tempStr;
        // �ܷ�ɹ�ת��Ϊdouble����
        if(successFlag)
        {
            //��¼����ʾ
            inputstr = ui->input_lineEdit->text();
            recordText += inputstr + "-";
            recordTextDisplay();
            if(operatorID.empty() == true)//��δ����ĸ߽�����
            {
                //������ջ
                inputNum.push_back(-inputDouble);
                inputstr = tempStr.number(sumStackNum(),'f',3);
                inputTextDisplay();

            }
            else
            {
                tempStr.number(heigOp(inputDouble),'f',3);
                inputstr =  tempStr.number( sumStackNum(),'f',3);
                inputTextDisplay();
            }
        }
        else
        {
            ui->input_lineEdit->text() = QString("�������");
            errorFlag = true;
            errorButtonLocker();
        }
    }
}

/**
  * @date 2020/7/9 @author marktlen
  * @brief �˳���ťʵ��
  */
void MainWindow::on_time_pushButton_clicked()
{
    if(opFlag == false)
    {
        opFlag = true;
        bool successFlag; //ת���ɹ����
        double inputDouble =  ui->input_lineEdit->text().toDouble(&successFlag);
        QString tempStr;
        // �ܷ�ɹ�ת��Ϊdouble����
        if(successFlag)
        {
            //��¼����ʾ
            inputstr = ui->input_lineEdit->text();
            recordText += inputstr + "*";
            recordTextDisplay();
            inputstr = tempStr.number(sumStackNum(),'f',3);
            inputTextDisplay();

            //������ջ
            inputNum.push_back(inputDouble);
            operatorID.push_back(1);
        }
        else
        {
            ui->input_lineEdit->text() = QString("�������");
            errorFlag = true;
            errorButtonLocker();
        }
    }
}

void MainWindow::on_div_pushButton_clicked()
{
    if(opFlag == false)
    {
        opFlag = true;
        bool successFlag; //ת���ɹ����
        double inputDouble =  ui->input_lineEdit->text().toDouble(&successFlag);
        QString tempStr;
        // �ܷ�ɹ�ת��Ϊdouble����
        if(successFlag)
        {
            //��¼����ʾ
            inputstr = ui->input_lineEdit->text();
            recordText += inputstr + "/";
            recordTextDisplay();
            inputstr = tempStr.number(sumStackNum(),'f',3);
            inputTextDisplay();

            //������ջ
            inputNum.push_back(inputDouble);
            operatorID.push_back(2);

        }
        else
        {
            ui->input_lineEdit->text() = QString("�������");
            errorFlag = true;
            errorButtonLocker();
        }
    }
}

void MainWindow::on_del_pushButton_clicked()
{
    inputstr.chop(1);
    inputTextDisplay();
}

void MainWindow::on_pushButton_1_clicked()
{
    opFlag = true;
    errorFlag = false;
    clearFlag = false;
    inputNum.clear();
    operatorID.clear();
    inputstr = "";
    recordText = "";
    inputTextDisplay();
    recordTextDisplay();
    errorButtonUnlocker();
}

void MainWindow::on_equal_pushButton_clicked()
{
    if(opFlag == false)
    {
        QString tempStr;
        bool successFlag; //ת���ɹ����
        double inputDouble =  ui->input_lineEdit->text().toDouble(&successFlag);
        // �ܷ�ɹ�ת��Ϊdouble����
        if(successFlag)
        {
            //��¼����ʾ
            inputstr = ui->input_lineEdit->text();
            recordText += inputstr;
            recordTextDisplay();
            if(operatorID.empty() == true)
            {
                //������ջ
                inputNum.push_back(inputDouble);
                inputstr =  tempStr.number( sumStackNum(),'f',3);
                inputTextDisplay();
            }
            else
            {
                tempStr.number(heigOp(inputDouble),'f',3);
                inputstr =  tempStr.number( sumStackNum(),'f',3);
                inputTextDisplay();
            }
        }
        else
        {
            ui->input_lineEdit->setText(QString("error!"));
            errorFlag = true;
            errorButtonLocker();
        }
    }
    if(errorFlag == true)
    {
        ui->input_lineEdit->setText(QString("error!"));
    }
}


void MainWindow::on_mod_pushButton_clicked()
{
    if(opFlag == false)
    {
        opFlag = true;
        bool successFlag; //ת���ɹ����
        double inputDouble =  ui->input_lineEdit->text().toDouble(&successFlag);
        QString tempStr;
        QString inputstr1;
        QString inputstr2;
        // �ܷ�ɹ�ת��Ϊdouble����
        if(successFlag)
        {
            //��¼����ʾ
            inputstr1 = ui->input_lineEdit->text();

            recordText += inputstr + "%";
            recordTextDisplay();
            if(operatorID.empty() == true) //��δ����ĸ߽�����
            {
                //������ջ
                inputNum.push_back(inputDouble);
                inputstr =  tempStr.number(sumStackNum(),'f',1);
                inputTextDisplay();
            }
            else
            {
                //���и����ȼ��������
                tempStr.number(heigOp(inputDouble),'f',1);
                inputstr =  tempStr.number( sumStackNum(),'f',1);
                inputTextDisplay();
            }
        }
        else
        {
            ui->input_lineEdit->text() = QString("�������");
            errorFlag = true;
            errorButtonLocker();
        }
    }
}
