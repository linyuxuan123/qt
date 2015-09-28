#include "mainwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <iostream>
#include <QPushButton>
using namespace std;
MainWindow::MainWindow(QWidget *parent)
    : QPushButton(parent)
{
    this->setMaximumSize(400,50);
    this->setMinimumSize(400,50);
   // customButton = new QPushButton(this);
    //customButton->setMaximumSize(400,50);
   // customButton->setMinimumSize(400,50);
    //customButton->setText(tr("click me"));
    this->setText("clicked me");
//    connect(customButton,&QPushButton::clicked,this,&MainWindow::onButtonCliecked);//clicked是一个
    //操作,对应的函数是mousePressEvent
    connect(this,&MainWindow::clicked,this,&MainWindow::onButtonCliecked);

}

MainWindow::~MainWindow()
{

}
void  MainWindow::onButtonCliecked()
{
//    qDebug()<<"you clicked this"<<endl;
//        QMessageBox::information(this,"look","you click this");
    cout<<"you clicked this"<<endl;
}
void MainWindow::mousePressEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        cout<<"left"<<endl;
    }
    else{
        QPushButton::mousePressEvent(event);
    }

}
