/********************************************************************************
** Form generated from reading UI file 'chestview.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHESTVIEW_H
#define UI_CHESTVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChestView
{
public:
    QGridLayout *gridLayout;
    QListView *listView;
    QLabel *label;

    void setupUi(QWidget *ChestView)
    {
        if (ChestView->objectName().isEmpty())
            ChestView->setObjectName(QString::fromUtf8("ChestView"));
        ChestView->resize(277, 133);
        gridLayout = new QGridLayout(ChestView);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listView = new QListView(ChestView);
        listView->setObjectName(QString::fromUtf8("listView"));
        listView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        listView->setWordWrap(true);

        gridLayout->addWidget(listView, 1, 0, 1, 1);

        label = new QLabel(ChestView);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(ChestView);

        QMetaObject::connectSlotsByName(ChestView);
    } // setupUi

    void retranslateUi(QWidget *ChestView)
    {
        ChestView->setWindowTitle(QCoreApplication::translate("ChestView", "Chest", nullptr));
        label->setText(QCoreApplication::translate("ChestView", "Chest", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChestView: public Ui_ChestView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHESTVIEW_H
