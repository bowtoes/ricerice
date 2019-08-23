/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QCheckBox *defaultSavePath;
    QHBoxLayout *horizontalLayout_3;
    QLabel *savePath;
    QPushButton *saveBrowse;
    QCheckBox *defaultTexturePath;
    QHBoxLayout *horizontalLayout;
    QLabel *texturePath;
    QPushButton *textureBrowse;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(360, 191);
        gridLayout = new QGridLayout(SettingsDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetFixedSize);
        defaultSavePath = new QCheckBox(SettingsDialog);
        defaultSavePath->setObjectName(QString::fromUtf8("defaultSavePath"));
        defaultSavePath->setChecked(true);

        verticalLayout->addWidget(defaultSavePath);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        savePath = new QLabel(SettingsDialog);
        savePath->setObjectName(QString::fromUtf8("savePath"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(savePath->sizePolicy().hasHeightForWidth());
        savePath->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(savePath);

        saveBrowse = new QPushButton(SettingsDialog);
        saveBrowse->setObjectName(QString::fromUtf8("saveBrowse"));

        horizontalLayout_3->addWidget(saveBrowse);


        verticalLayout->addLayout(horizontalLayout_3);

        defaultTexturePath = new QCheckBox(SettingsDialog);
        defaultTexturePath->setObjectName(QString::fromUtf8("defaultTexturePath"));
        defaultTexturePath->setChecked(true);

        verticalLayout->addWidget(defaultTexturePath);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        texturePath = new QLabel(SettingsDialog);
        texturePath->setObjectName(QString::fromUtf8("texturePath"));
        sizePolicy.setHeightForWidth(texturePath->sizePolicy().hasHeightForWidth());
        texturePath->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(texturePath);

        textureBrowse = new QPushButton(SettingsDialog);
        textureBrowse->setObjectName(QString::fromUtf8("textureBrowse"));

        horizontalLayout->addWidget(textureBrowse);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 1, 0, 1, 1);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SettingsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));
        QObject::connect(saveBrowse, SIGNAL(clicked()), SettingsDialog, SLOT(browseWorlds()));
        QObject::connect(textureBrowse, SIGNAL(clicked()), SettingsDialog, SLOT(browseTextures()));
        QObject::connect(defaultSavePath, SIGNAL(toggled(bool)), SettingsDialog, SLOT(toggleWorlds(bool)));
        QObject::connect(defaultTexturePath, SIGNAL(toggled(bool)), SettingsDialog, SLOT(toggleTextures(bool)));

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "Settings", nullptr));
        defaultSavePath->setText(QCoreApplication::translate("SettingsDialog", "Autodetect Saved Games Folder", nullptr));
        savePath->setText(QCoreApplication::translate("SettingsDialog", "/", nullptr));
        saveBrowse->setText(QCoreApplication::translate("SettingsDialog", "Browse...", nullptr));
        defaultTexturePath->setText(QCoreApplication::translate("SettingsDialog", "Autodetect Texture Folder", nullptr));
        texturePath->setText(QCoreApplication::translate("SettingsDialog", "/", nullptr));
        textureBrowse->setText(QCoreApplication::translate("SettingsDialog", "Browse...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
