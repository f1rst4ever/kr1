#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <cmath>
#include <QtGui/QValidator>
#include <QtGui/QIntValidator>


#include <QValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int index = ui->comboBox->currentIndex();
    float a;
    float b;
    float c;
    float p=3.1415;

    a=ui->line1->text().toFloat();
    b=ui->line2->text().toFloat();
    c=ui->line3->text().toFloat();

    //квадрат
    if(index==0){
        ui->answer->setNum(pow(a,2));
    }
    //круг
    if(index==1){
        ui->answer->setNum(p * pow(a,2));
    }
    //овал
    if(index==2){
        ui->answer->setNum(a*p*b);
    }
    //прямоугольник
    if(index==3){
        ui->answer->setNum(a*b);
    }
    //треугольник
    if(index==4){
        ui->answer->setNum(0.5*a*b);
    }
    //ромб
    if(index==5){
        ui->answer->setNum(a*b);
    }
    //параллелограмм
    if(index==6){
        ui->answer->setNum(a*b*c);
    }
    //трапеция
    if(index==7){
        ui->answer->setNum(0.5*c*(a+b));
    }
    //куб
    if(index==8){
        ui->answer->setNum(pow(a, 3));
    }
    //пирамида
    if(index==9){
        ui->answer->setNum(0.33333*c*a*b);
    }
    //шар
    if(index==10){
        ui->answer->setNum(1.33333*p*pow(a, 3));
    }
    //параллелепипед
    if(index==11){
        ui->answer->setNum(a*b*c);
    }
    //конус
    if(index==12){
        ui->answer->setNum(0.33333*p*pow(a, 2)*b);
    }
    //цилиндр
    if(index==13){
        ui->answer->setNum(p*pow(a, 2)*b);
    }
}

//Корректное отображение lineEdit
//в соответствии с выбранной фигурой

void MainWindow::changeTextOnLabels(int index)
{
    if(index==0){
        ui->textA->setText("Введите сторону");
        ui->textB->setText(" ");
        ui->textC->setText(" ");
        ui->line1->show();
        ui->line2->hide();
        ui->line3->hide();
        //квадрат
    }
    if(index==1){
        ui->textA->setText("Введите радиус");
        ui->textB->setText(" ");
        ui->textC->setText(" ");
        ui->line1->show();
        ui->line2->hide();
        ui->line3->hide();
        //круг
    }
    if(index==2){
        ui->textA->setText("Введите радиус №1");
        ui->textB->setText("Введите радиус №2");
        ui->textC->setText(" ");
        ui->line1->show();
        ui->line2->show();
        ui->line3->hide();
        //овал
    }
    if(index==3){
        ui->textA->setText("Введите сторону А");
        ui->textB->setText("Введите сторону B");
        ui->textC->setText(" ");
        ui->line1->show();
        ui->line2->show();
        ui->line3->hide();
        //прямоугольник
    }
    if(index==4){
        ui->textA->setText("Введите катет А");
        ui->textB->setText("Введите катет B");
        ui->textC->setText(" ");
        ui->line1->show();
        ui->line2->show();
        ui->line3->hide();
        //треугольник
    }
    if(index==5){
        ui->textA->setText("Введите основание");
        ui->textB->setText("Введите высоту");
        ui->textC->setText(" ");
        ui->line1->show();
        ui->line2->show();
        ui->line3->hide();
        //ромб
    }
    if(index==6){
        ui->textA->setText("Введите сторону A");
        ui->textB->setText("Введите сторону B");
        ui->textC->setText("Введите сторону C");
        ui->line1->show();
        ui->line2->show();
        ui->line3->show();
        //параллелограмм
    }
    if(index==7){
        ui->textA->setText("Введите основание №1");
        ui->textB->setText("Введите основание №2");
        ui->textC->setText("Введите высоту");
        ui->line1->show();
        ui->line2->show();
        ui->line3->show();
        //трапеция
    }
    if(index==8){
        ui->textA->setText("Введите сторону");
        ui->textB->setText(" ");
        ui->textC->setText(" ");
        ui->line1->show();
        ui->line2->hide();
        ui->line3->hide();
        //куб
    }
    if(index==9){
        ui->textA->setText("Введите высоту пирамиды");
        ui->textB->setText("Введите длину основания №1");
        ui->textC->setText("Введите длину основания №2");
        ui->line1->show();
        ui->line2->show();
        ui->line3->show();
        //пирамида
    }
    if(index==10){
        ui->textA->setText("Введите радиус шара");
        ui->textB->setText(" ");
        ui->textC->setText(" ");
        ui->line1->show();
        ui->line2->hide();
        ui->line3->hide();
        //шар
    }
    if(index==11){
        ui->textA->setText("Введите сторону A");
        ui->textB->setText("Введите сторону B");
        ui->textC->setText("Введите сторону C");
        ui->line1->show();
        ui->line2->show();
        ui->line3->show();
        //параллелепипед
    }
    if(index==12){
        ui->textA->setText("Введите радиус");
        ui->textB->setText("Введите высоту");
        ui->textC->setText(" ");
        ui->line1->show();
        ui->line2->show();
        ui->line3->hide();
        //конус
    }
    if(index==13){
        ui->textA->setText("Введите радиус");
        ui->textB->setText("Введите высоту");
        ui->textC->setText(" ");
        ui->line1->show();
        ui->line2->show();
        ui->line3->hide();
        //цилиндр
    }
}

void MainWindow::on_comboBox_activated(int index)
{
    changeTextOnLabels(index);
}
