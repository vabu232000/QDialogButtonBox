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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *PositionlineEdit;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QRadioButton *windowsradioButton;
    QRadioButton *MacradioButton_2;
    QRadioButton *LinuxradioButton_3;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *okpushbutton;
    QPushButton *cancelpushButton_2;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QString::fromUtf8("InfoDialog"));
        InfoDialog->resize(592, 355);
        verticalLayout_2 = new QVBoxLayout(InfoDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(InfoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(InfoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        PositionlineEdit = new QLineEdit(InfoDialog);
        PositionlineEdit->setObjectName(QString::fromUtf8("PositionlineEdit"));

        horizontalLayout->addWidget(PositionlineEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        groupBox = new QGroupBox(InfoDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        windowsradioButton = new QRadioButton(groupBox);
        windowsradioButton->setObjectName(QString::fromUtf8("windowsradioButton"));

        verticalLayout->addWidget(windowsradioButton);

        MacradioButton_2 = new QRadioButton(groupBox);
        MacradioButton_2->setObjectName(QString::fromUtf8("MacradioButton_2"));

        verticalLayout->addWidget(MacradioButton_2);

        LinuxradioButton_3 = new QRadioButton(groupBox);
        LinuxradioButton_3->setObjectName(QString::fromUtf8("LinuxradioButton_3"));

        verticalLayout->addWidget(LinuxradioButton_3);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        okpushbutton = new QPushButton(InfoDialog);
        okpushbutton->setObjectName(QString::fromUtf8("okpushbutton"));

        horizontalLayout_2->addWidget(okpushbutton);

        cancelpushButton_2 = new QPushButton(InfoDialog);
        cancelpushButton_2->setObjectName(QString::fromUtf8("cancelpushButton_2"));

        horizontalLayout_2->addWidget(cancelpushButton_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        retranslateUi(InfoDialog);

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QCoreApplication::translate("InfoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("InfoDialog", "Your information", nullptr));
        label_2->setText(QCoreApplication::translate("InfoDialog", "Position", nullptr));
        groupBox->setTitle(QCoreApplication::translate("InfoDialog", "Your favourite os:", nullptr));
        windowsradioButton->setText(QCoreApplication::translate("InfoDialog", "windows", nullptr));
        MacradioButton_2->setText(QCoreApplication::translate("InfoDialog", "Mac", nullptr));
        LinuxradioButton_3->setText(QCoreApplication::translate("InfoDialog", "Linux", nullptr));
        okpushbutton->setText(QCoreApplication::translate("InfoDialog", "ok", nullptr));
        cancelpushButton_2->setText(QCoreApplication::translate("InfoDialog", "cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
