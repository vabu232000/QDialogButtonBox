#include "infodialog.h"
#include "ui_infodialog.h"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent,Qt::WindowSystemMenuHint|Qt::WindowTitleHint),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_okpushbutton_clicked()
{
    QString userposition= ui->PositionlineEdit->text();
    if(userposition.isEmpty())
    {
        position=userposition;
        if(ui->windowsradioButton->isChecked()){
            FavouriteoS="Windows";
        }
        if(ui->MacradioButton_2->isChecked()){
            FavouriteoS="Mac";
        }
        if(ui->LinuxradioButton_3->isChecked()){
            FavouriteoS="Linux";
        }
    }
    accept();
}

void InfoDialog::on_cancelpushButton_2_clicked()
{
    reject();
}

QString InfoDialog::getPosition() const
{
    return position;
}

QString InfoDialog::getFavouriteoS() const
{
    return FavouriteoS;
}

