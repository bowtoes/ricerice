/********************************************************************************
** Form generated from reading UI file 'killdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KILLDIALOG_H
#define UI_KILLDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_KillDialog
{
public:
    QGridLayout *gridLayout;
    QTableView *tableView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *KillDialog)
    {
        if (KillDialog->objectName().isEmpty())
            KillDialog->setObjectName(QString::fromUtf8("KillDialog"));
        KillDialog->resize(400, 300);
        gridLayout = new QGridLayout(KillDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tableView = new QTableView(KillDialog);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setSelectionMode(QAbstractItemView::NoSelection);
        tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
        tableView->setShowGrid(false);
        tableView->setSortingEnabled(true);
        tableView->horizontalHeader()->setVisible(true);
        tableView->horizontalHeader()->setCascadingSectionResizes(true);
        tableView->horizontalHeader()->setDefaultSectionSize(150);
        tableView->horizontalHeader()->setStretchLastSection(true);
        tableView->verticalHeader()->setVisible(false);
        tableView->verticalHeader()->setProperty("showSortIndicator", QVariant(false));

        gridLayout->addWidget(tableView, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(KillDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(KillDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), KillDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), KillDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(KillDialog);
    } // setupUi

    void retranslateUi(QDialog *KillDialog)
    {
        KillDialog->setWindowTitle(QCoreApplication::translate("KillDialog", "Kill Counts", nullptr));
    } // retranslateUi

};

namespace Ui {
    class KillDialog: public Ui_KillDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KILLDIALOG_H
