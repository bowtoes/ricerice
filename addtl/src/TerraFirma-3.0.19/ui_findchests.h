/********************************************************************************
** Form generated from reading UI file 'findchests.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FINDCHESTS_H
#define UI_FINDCHESTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTreeView>

QT_BEGIN_NAMESPACE

class Ui_FindChests
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QTreeView *treeView;
    QLineEdit *searchLineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *FindChests)
    {
        if (FindChests->objectName().isEmpty())
            FindChests->setObjectName(QString::fromUtf8("FindChests"));
        FindChests->resize(400, 300);
        gridLayout = new QGridLayout(FindChests);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(FindChests);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        treeView = new QTreeView(FindChests);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        treeView->setIndentation(10);
        treeView->setHeaderHidden(true);

        gridLayout->addWidget(treeView, 2, 0, 1, 1);

        searchLineEdit = new QLineEdit(FindChests);
        searchLineEdit->setObjectName(QString::fromUtf8("searchLineEdit"));

        gridLayout->addWidget(searchLineEdit, 1, 0, 1, 1);

        buttonBox = new QDialogButtonBox(FindChests);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 1);


        retranslateUi(FindChests);
        QObject::connect(buttonBox, SIGNAL(accepted()), FindChests, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), FindChests, SLOT(reject()));
        QObject::connect(searchLineEdit, SIGNAL(textChanged(QString)), FindChests, SLOT(searchTextChanged(QString)));

        QMetaObject::connectSlotsByName(FindChests);
    } // setupUi

    void retranslateUi(QDialog *FindChests)
    {
        FindChests->setWindowTitle(QCoreApplication::translate("FindChests", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("FindChests", "Select a chest to jump to it", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FindChests: public Ui_FindChests {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FINDCHESTS_H
