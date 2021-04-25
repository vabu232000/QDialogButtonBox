#include "widget.h"
#include "ui_widget.h"
#include<infodialog.h>
#include<QDebug>
#include<QString>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_provideinfopushButton_clicked()
{
    InfoDialog *dialog=new InfoDialog(this);
    /*Modal
   int ret=dialog->exec();
    if(ret==QDialog::Accepted)
    {
        QString position= dialog->getPosition();
        QString Os= dialog->getFavouriteoS();
        qDebug()<<"Dialog Accepted, position is:"<<position<<"and favourite os: "<<Os;
        ui->infolabel->setText("Your position is: "+position+"and favourite os: "+Os);

    }
    if(ret==QDialog::Rejected)
    {
     qDebug()<<"Dialog Rejected";
     }
   */
    connect(dialog,&InfoDialog::accepted,[=](){
        QString position=dialog->getPosition();
        QString Os=dialog->getFavouriteoS();
        qDebug()<<"Dialog Accepted, position is:"<<position<<"and favourite os:"<<Os;
        ui->infolabel->setText("your position is:"+position+"and your favourite os:"+Os);

    });
    connect(dialog,&InfoDialog::rejected,[=](){
       qDebug()<<"Dialog Rejected";

    });
    dialog->show();
    dialog->raise();
    dialog->activateWindow();
}


