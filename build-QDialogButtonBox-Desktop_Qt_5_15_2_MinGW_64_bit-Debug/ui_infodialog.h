/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QDialogButtonBox *dialogButtonBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QString::fromUtf8("InfoDialog"));
        InfoDialog->resize(720, 386);
        verticalLayout = new QVBoxLayout(InfoDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textEdit = new QTextEdit(InfoDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        dialogButtonBox = new QDialogButtonBox(InfoDialog);
        dialogButtonBox->setObjectName(QString::fromUtf8("dialogButtonBox"));
        dialogButtonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::No|QDialogButtonBox::NoToAll|QDialogButtonBox::Ok|QDialogButtonBox::Open|QDialogButtonBox::Save|QDialogButtonBox::SaveAll);

        verticalLayout->addWidget(dialogButtonBox);

        buttonBox = new QDialogButtonBox(InfoDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));

        verticalLayout->addWidget(buttonBox);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QCoreApplication::translate("InfoDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
