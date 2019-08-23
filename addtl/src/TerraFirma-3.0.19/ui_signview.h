/********************************************************************************
** Form generated from reading UI file 'signview.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNVIEW_H
#define UI_SIGNVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignView
{
public:
    QGridLayout *gridLayout;
    QLabel *label;

    void setupUi(QWidget *SignView)
    {
        if (SignView->objectName().isEmpty())
            SignView->setObjectName(QString::fromUtf8("SignView"));
        SignView->resize(246, 48);
        gridLayout = new QGridLayout(SignView);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(SignView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(SignView);

        QMetaObject::connectSlotsByName(SignView);
    } // setupUi

    void retranslateUi(QWidget *SignView)
    {
        SignView->setWindowTitle(QCoreApplication::translate("SignView", "Form", nullptr));
        label->setText(QCoreApplication::translate("SignView", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignView: public Ui_SignView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNVIEW_H
