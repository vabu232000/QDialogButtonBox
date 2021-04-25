#include "infodialog.h"
#include "ui_infodialog.h"
#include<QDebug>
InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}



void InfoDialog::on_dialogButtonBox_clicked(QAbstractButton *button)
{
    QDialogButtonBox::StandardButton stdButton= ui->dialogButtonBox->standardButton(button);
    if(stdButton==QDialogButtonBox::Ok)
    {
    accept();
    qDebug()<<"Ok button clicked";
    }
    if(stdButton==QDialogButtonBox::Cancel)
    {
    reject();
    qDebug()<<"cancel button clicked";
    }
    if(stdButton==QDialogButtonBox::Save)
    {
    reject();
    qDebug()<<"Save button clicked";
    }
    if(stdButton==QDialogButtonBox::SaveAll)
    {
    reject();
    qDebug()<<"Save All button clicked";
    }
    if(stdButton==QDialogButtonBox::Open)
    {
    open();
    qDebug()<<"Open button clicked";
    }
    if(stdButton==QDialogButtonBox::No)
    {
    reject();
    qDebug()<<"No button clicked";
    }
    if(stdButton==QDialogButtonBox::NoToAll)
    {
    reject();
    qDebug()<<"No to All button clicked";
    }
}
