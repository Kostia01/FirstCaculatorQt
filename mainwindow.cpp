#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->setWindowTitle("calculator");
    buff.clear();
     a=0;
     b=0;
     c=0;

    isMultiply=false;
    isDivision=false;
    isOstacha=false;

    isPlus=false;
    isMinus=false;
    isDot=false;
    ui->setupUi(this);
}
void MainWindow::setTitle()
{
    this->setWindowTitle("calculator");
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Button_1_clicked()
{
    ui->label->setText( ui->label->text() + "1" );
    buff.push_back("1");
}

void MainWindow::on_Button_2_clicked()
{
    ui->label->setText(ui->label->text()+"2");
    buff.push_back("2");
}

void MainWindow::on_Button_3_clicked()
{
    ui->label->setText(ui->label->text()+"3");
    buff.push_back("3");
}

void MainWindow::on_Button_4_clicked()
{
    ui->label->setText(ui->label->text()+"4");
    buff.push_back("4");
}

void MainWindow::on_Button_5_clicked()
{
    ui->label->setText(ui->label->text()+"5");
     buff.push_back("5");
}

void MainWindow::on_Button_6_clicked()
{
     ui->label->setText(ui->label->text()+"6");
      buff.push_back("6");
}

void MainWindow::on_Button_7_clicked()
{
     ui->label->setText(ui->label->text()+"7");
      buff.push_back("7");
}

void MainWindow::on_Button_8_clicked()
{
    ui->label->setText(ui->label->text()+"8");
     buff.push_back("8");
}

void MainWindow::on_Button_9_clicked()
{
    ui->label->setText(ui->label->text()+"9");
     buff.push_back("9");
}

void MainWindow::on_Button_0_clicked()
{
    ui->label->setText(ui->label->text()+"0");
     buff.push_back("0");
}

void MainWindow::on_Button_plus_clicked()
{
    ui->label->setText(ui->label->text()+"+");
    if(!isPlus)
    {
        isPlus=true;
        a=buff.toDouble();
        buff.clear();
    }else{
        isPlus=false;
        b=buff.toDouble();
        buff.clear();
        c=a+b;
        buff.push_back(QString::number(c));
       ui->label->setText(QString::number(c));
    }
}

void MainWindow::on_Button_equal_clicked()
{
    if(isPlus)
    {
        isPlus=false;
        b=buff.toDouble();
        buff.clear();
        c=a+b;
        buff.push_back(QString::number(c));
       ui->label->setText(QString::number(c));
    }
    if(isMinus)
    {
        isMinus=false;
        b=buff.toDouble();
        buff.clear();
        c=a-b;
        buff.push_back(QString::number(c));
        ui->label->setText(QString::number(c));
    }
    if(isMultiply)
    {
        isMultiply=false;
        b=buff.toDouble();
        buff.clear();
        c=a*b;
        buff.push_back(QString::number(c));
        ui->label->setText(QString::number(c));
    }
    if(isDivision)
    {
        isDivision=false;
        b=buff.toDouble();
        buff.clear();
        c=a/b;
        buff.push_back(QString::number(c));
        ui->label->setText(QString::number(c));
    }
    if(isOstacha)
    {

            isOstacha=false;
            b=buff.toInt();
            buff.clear();
            c=(a*b)*0.01;
            buff.push_back(QString::number(c));
            ui->label->setText(QString::number(c));


    }
}

void MainWindow::on_Button_minus_clicked()
{
    ui->label->setText(ui->label->text()+"-");
    if(!isMinus)
    {
        isMinus=true;
        a=buff.toDouble();
        buff.clear();

    }
    else
    {
        isMinus=false;
        b=buff.toDouble();
        buff.clear();
        c=a-b;
        buff.push_back(QString::number(c));
        ui->label->setText(QString::number(c));
    }
}

void MainWindow::on_Button_multiplication_clicked()
{
    ui->label->setText(ui->label->text()+"*");
    if(!isMultiply)
    {
        isMultiply=true;
        a=buff.toDouble();
        buff.clear();

    }
    else
    {
        isMultiply=false;
        b=buff.toDouble();
        buff.clear();
        c=a*b;
        buff.push_back(QString::number(c));
        ui->label->setText(QString::number(c));
    }

}

void MainWindow::on_Button_C_clicked()
{
    buff.clear();
    ui->label->clear();
}

void MainWindow::on_Button_multiplication_2_clicked()
{

}

void MainWindow::on_Button_division2_clicked()
{
    ui->label->setText(ui->label->text()+"÷");
    if(!isDivision)
    {
        isDivision=true;
        a=buff.toDouble();
        buff.clear();

    }
    else
    {
        isDivision=false;
        b=buff.toDouble();
        buff.clear();
        c=a/b;
        buff.push_back(QString::number(c));
        ui->label->setText(QString::number(c));
    }


}

void MainWindow::on_Button_division_clicked()
{
    ui->label->setText(ui->label->text()+"%");
    if(!isOstacha)
    {
        isOstacha=true;
        a=buff.toInt();
        buff.clear();

    }
    else
    {
        isOstacha=false;
        b=buff.toInt();
        buff.clear();
        c=(a*b)*0.01;
        buff.push_back(QString::number(c));
        ui->label->setText(QString::number(c));
    }


}

void MainWindow::on_Button_del_clicked()
{
   ui->label->setText(ui->label->text().left(ui->label->text().size()-1));
   buff.clear();

}

void MainWindow::on_Button_Dot_clicked()
{
ui->label->setText(ui->label->text()+".");
    if(!isDot)
    {
    isDot=true;
    a=buff.toDouble();
    buff.clear();
    }
    else
    {
   isDot=false;
   b=buff.toDouble();
   buff.clear();

   buff.push_back(QString::number(c));
   ui->label->setText(QString::number(c));
    }
}

