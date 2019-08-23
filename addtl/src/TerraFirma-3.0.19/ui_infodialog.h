/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_InfoDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout_2;
    QTableView *tableView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *InfoDialog)
    {
        if (InfoDialog->objectName().isEmpty())
            InfoDialog->setObjectName(QString::fromUtf8("InfoDialog"));
        InfoDialog->resize(400, 300);
        gridLayout = new QGridLayout(InfoDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tableView = new QTableView(InfoDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setAlternatingRowColors(false);
        tableView->setSelectionMode(QAbstractItemView::NoSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setShowGrid(false);
        tableView->horizontalHeader()->setVisible(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->horizontalHeader()->setDefaultSectionSize(150);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);

        verticalLayout_2->addWidget(tableView);

        buttonBox = new QDialogButtonBox(InfoDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(1);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy1);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);

        verticalLayout_2->setStretch(0, 1);

        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        retranslateUi(InfoDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), InfoDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), InfoDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(InfoDialog);
    } // setupUi

    void retranslateUi(QDialog *InfoDialog)
    {
        InfoDialog->setWindowTitle(QCoreApplication::translate("InfoDialog", "World Information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class InfoDialog: public Ui_InfoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
