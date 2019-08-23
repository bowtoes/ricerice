/********************************************************************************
** Form generated from reading UI file 'hilitedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HILITEDIALOG_H
#define UI_HILITEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_HiliteDialog
{
public:
    QGridLayout *gridLayout;
    QLineEdit *searchLineEdit;
    QTreeView *treeView;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *HiliteDialog)
    {
        if (HiliteDialog->objectName().isEmpty())
            HiliteDialog->setObjectName(QString::fromUtf8("HiliteDialog"));
        HiliteDialog->resize(400, 300);
        gridLayout = new QGridLayout(HiliteDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        searchLineEdit = new QLineEdit(HiliteDialog);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));

        gridLayout->addWidget(searchLineEdit, 0, 0, 1, 1);

        treeView = new QTreeView(HiliteDialog);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setIndentation(10);
        treeView->setHeaderHidden(true);

        gridLayout->addWidget(treeView, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(HiliteDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 2, 0, 1, 1);


        retranslateUi(HiliteDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), HiliteDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), HiliteDialog, SLOT(reject()));
        QObject::connect(searchLineEdit, SIGNAL(textChanged(QString)), HiliteDialog, SLOT(searchTextChanged(QString)));

        QMetaObject::connectSlotsByName(HiliteDialog);
    } // setupUi

    void retranslateUi(QDialog *HiliteDialog)
    {
        HiliteDialog->setWindowTitle(QCoreApplication::translate("HiliteDialog", "Hilight Tiles", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HiliteDialog: public Ui_HiliteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HILITEDIALOG_H
