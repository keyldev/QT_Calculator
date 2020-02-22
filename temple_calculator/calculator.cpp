#include "calculator.h"
#include "ui_calculator.h"

#include <QGraphicsDropShadowEffect>

calculator::calculator(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Dialog | Qt::MSWindowsFixedSizeDialogHint);
}
char action;
double firstnum;
bool isPushed = false;
calculator::~calculator()
{
    delete ui;
}


void calculator::on_pushButton_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text()+"1");
    isPushed = true;

}

void calculator::on_pushButton_11_clicked()
{
    action = '+';
    firstnum= ui->lineEdit->text().toDouble();
    ui->lineEdit->setText("");
    //ui->lineEdit->setText(QString::number(firstnum) + " + ");
    isPushed = true;
}

void calculator::on_pushButton_2_clicked()
{
    if(isPushed)
        ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text()+"2");
    isPushed = false;
}

void calculator::on_pushButton_12_clicked()
{
    double second,temp = 0;
    second = ui->lineEdit->text().toDouble();
//    if(action != '\0'){
//    if(action == '+')
//        temp = firstnum + second;
//    else if(action == '*')
//        temp = firstnum * second;
//    else if(action == '/')
//        temp = firstnum / second;
//    else if(action == '%')
//        temp = firstnum * 0.01;
//    else if(action == "]-")
//        temp = firstnum - second;
//    }
   // else ui->lineEdit->setText("Молодец, рукожоп, что-то да не работает..");
    switch(action)
    {
        case '+':temp = firstnum + second;break;
        case '-':temp = firstnum - second;break;
        case '*':temp = firstnum * second;break;
        case '/':temp = firstnum / second;break;
        case '%':temp = firstnum *0.01;break;
    }
        ui->lineEdit->setText("");
       ui->lineEdit->setAlignment(Qt::AlignRight | Qt::AlignVCenter);
         ui->lineEdit->setText(QString::number(temp));
}

void calculator::on_pushButton_3_clicked()
{
    if(isPushed)
        ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text()+"3");
    isPushed = false;
}
void calculator::on_pushButton_4_clicked()
{
    if(isPushed)
        ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text()+"4");
    isPushed = false;
}


void calculator::on_pushButton_5_clicked()
{
    if(isPushed)
        ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text()+"5");
    isPushed = false;
}

void calculator::on_pushButton_6_clicked()
{
    if(isPushed)
        ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text()+"6");
    isPushed = false;
}

void calculator::on_pushButton_7_clicked()
{
    if(isPushed)
        ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text()+"7");
    isPushed = false;
}

void calculator::on_pushButton_8_clicked()
{
    if(isPushed)
        ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text()+"8");
    isPushed = false;
}

void calculator::on_pushButton_9_clicked()
{
    if(isPushed)
        ui->lineEdit->setText("");
    ui->lineEdit->setText(ui->lineEdit->text()+"9");
    isPushed = false;
}

void calculator::on_pushButton_13_clicked()
{
    action = '/';
    firstnum= ui->lineEdit->text().toDouble();
    ui->lineEdit->setText("");
    isPushed = true;
}

void calculator::on_pushButton_14_clicked()
{
    action = '*';
    firstnum= ui->lineEdit->text().toDouble();
    ui->lineEdit->setText("");

    isPushed = true;
}

void calculator::on_pushButton_15_clicked()
{
    action = '%';
    firstnum= ui->lineEdit->text().toDouble();
    ui->lineEdit->setText("");
}

void calculator::on_pushButton_16_clicked()
{
    action = '-';
    firstnum = ui->lineEdit->text().toDouble();
    ui->lineEdit->setText("");
    isPushed = true;

}

void calculator::on_pushButton_17_clicked()
{
    firstnum = 0;
    ui->lineEdit->setText("");
}
