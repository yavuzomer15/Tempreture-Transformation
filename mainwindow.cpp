#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_pushButtonCtoF_clicked()
{
    bool ok;
    float celsius=ui->textEdit->toPlainText().toFloat(&ok); //take number from text edit in ui
    if(ok){
        float fahr=(celsius*9/5)+32;
        ui->labeloutput->setText("Sonuç:" + QString::number(fahr)+"F");
    } else{
       ui->labeloutput->setText("Wrong Input!");
    }
}


void MainWindow::on_pushButtonFtoC_clicked()
{
    bool ok;
    float fahr=ui->textEdit->toPlainText().toFloat(&ok);
    if(ok){
        float celsius=(fahr -32)*5/9;
        ui->labeloutput->setText("Sonuç: " + QString::number(celsius)+"C");
    }else{
        ui->labeloutput->setText("Wrong Input!");
    }
}

