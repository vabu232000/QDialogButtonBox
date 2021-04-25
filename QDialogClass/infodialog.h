#ifndef INFODIALOG_H
#define INFODIALOG_H

#include <QDialog>

namespace Ui {
class InfoDialog;
}

class InfoDialog : public QDialog
{
    Q_OBJECT

public:
    explicit InfoDialog(QWidget *parent = nullptr);
    ~InfoDialog();

    QString getFavouriteoS() const;

    QString getPosition() const;

private slots:
    void on_okpushbutton_clicked();

    void on_cancelpushButton_2_clicked();

private:
    Ui::InfoDialog *ui;
  QString position;
  QString FavouriteoS;
};

#endif // INFODIALOG_H
