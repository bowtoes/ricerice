/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include "glmap.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Open;
    QAction *actionRefresh;
    QAction *action_Save_PNG;
    QAction *action_Quit;
    QAction *actionUse_Textures;
    QAction *actionShow_Houses;
    QAction *actionShow_Wires;
    QAction *actionFog_of_War;
    QAction *actionNo_Lighting;
    QAction *actionLighting;
    QAction *actionColored_Lighting;
    QAction *actionHilight_Block;
    QAction *actionStop_Hilighting;
    QAction *actionWorld_Information;
    QAction *actionWorld_Kill_Counts;
    QAction *actionJump_to_Spawn;
    QAction *actionJump_to_Dungeon;
    QAction *actionFind_Chest;
    QAction *actionAbout_Terrafirma;
    QAction *actionSettings;
    GLMap *map;
    QMenuBar *menuBar;
    QMenu *menuTerrafirma;
    QMenu *menuOpen_World;
    QMenu *menu_View;
    QMenu *menuSelect_Player;
    QMenu *menu_Navigate;
    QMenu *menuNPCs;
    QMenu *menu_Help;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(640, 480);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/terrafirma.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_Open = new QAction(MainWindow);
        action_Open->setObjectName(QString::fromUtf8("action_Open"));
        action_Open->setShortcutContext(Qt::ApplicationShortcut);
        action_Open->setMenuRole(QAction::TextHeuristicRole);
        actionRefresh = new QAction(MainWindow);
        actionRefresh->setObjectName(QString::fromUtf8("actionRefresh"));
        actionRefresh->setShortcutContext(Qt::ApplicationShortcut);
        action_Save_PNG = new QAction(MainWindow);
        action_Save_PNG->setObjectName(QString::fromUtf8("action_Save_PNG"));
        action_Save_PNG->setShortcutContext(Qt::ApplicationShortcut);
        action_Quit = new QAction(MainWindow);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Quit->setMenuRole(QAction::QuitRole);
        actionUse_Textures = new QAction(MainWindow);
        actionUse_Textures->setObjectName(QString::fromUtf8("actionUse_Textures"));
        actionUse_Textures->setCheckable(true);
        actionUse_Textures->setShortcutContext(Qt::ApplicationShortcut);
        actionShow_Houses = new QAction(MainWindow);
        actionShow_Houses->setObjectName(QString::fromUtf8("actionShow_Houses"));
        actionShow_Houses->setCheckable(true);
        actionShow_Wires = new QAction(MainWindow);
        actionShow_Wires->setObjectName(QString::fromUtf8("actionShow_Wires"));
        actionShow_Wires->setCheckable(true);
        actionFog_of_War = new QAction(MainWindow);
        actionFog_of_War->setObjectName(QString::fromUtf8("actionFog_of_War"));
        actionFog_of_War->setCheckable(true);
        actionFog_of_War->setShortcutContext(Qt::ApplicationShortcut);
        actionNo_Lighting = new QAction(MainWindow);
        actionNo_Lighting->setObjectName(QString::fromUtf8("actionNo_Lighting"));
        actionNo_Lighting->setCheckable(true);
        actionNo_Lighting->setChecked(true);
        actionLighting = new QAction(MainWindow);
        actionLighting->setObjectName(QString::fromUtf8("actionLighting"));
        actionLighting->setCheckable(true);
        actionColored_Lighting = new QAction(MainWindow);
        actionColored_Lighting->setObjectName(QString::fromUtf8("actionColored_Lighting"));
        actionColored_Lighting->setCheckable(true);
        actionHilight_Block = new QAction(MainWindow);
        actionHilight_Block->setObjectName(QString::fromUtf8("actionHilight_Block"));
        actionHilight_Block->setShortcutContext(Qt::ApplicationShortcut);
        actionStop_Hilighting = new QAction(MainWindow);
        actionStop_Hilighting->setObjectName(QString::fromUtf8("actionStop_Hilighting"));
        actionStop_Hilighting->setShortcutContext(Qt::ApplicationShortcut);
        actionWorld_Information = new QAction(MainWindow);
        actionWorld_Information->setObjectName(QString::fromUtf8("actionWorld_Information"));
        actionWorld_Kill_Counts = new QAction(MainWindow);
        actionWorld_Kill_Counts->setObjectName(QString::fromUtf8("actionWorld_Kill_Counts"));
        actionJump_to_Spawn = new QAction(MainWindow);
        actionJump_to_Spawn->setObjectName(QString::fromUtf8("actionJump_to_Spawn"));
        actionJump_to_Spawn->setShortcutContext(Qt::ApplicationShortcut);
        actionJump_to_Dungeon = new QAction(MainWindow);
        actionJump_to_Dungeon->setObjectName(QString::fromUtf8("actionJump_to_Dungeon"));
        actionFind_Chest = new QAction(MainWindow);
        actionFind_Chest->setObjectName(QString::fromUtf8("actionFind_Chest"));
        actionAbout_Terrafirma = new QAction(MainWindow);
        actionAbout_Terrafirma->setObjectName(QString::fromUtf8("actionAbout_Terrafirma"));
        actionAbout_Terrafirma->setMenuRole(QAction::AboutRole);
        actionSettings = new QAction(MainWindow);
        actionSettings->setObjectName(QString::fromUtf8("actionSettings"));
        map = new GLMap(MainWindow);
        map->setObjectName(QString::fromUtf8("map"));
        map->setEnabled(false);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(map->sizePolicy().hasHeightForWidth());
        map->setSizePolicy(sizePolicy);
        map->setMouseTracking(true);
        map->setFocusPolicy(Qt::StrongFocus);
        MainWindow->setCentralWidget(map);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 640, 25));
        menuTerrafirma = new QMenu(menuBar);
        menuTerrafirma->setObjectName(QString::fromUtf8("menuTerrafirma"));
        menuOpen_World = new QMenu(menuTerrafirma);
        menuOpen_World->setObjectName(QString::fromUtf8("menuOpen_World"));
        menu_View = new QMenu(menuBar);
        menu_View->setObjectName(QString::fromUtf8("menu_View"));
        menuSelect_Player = new QMenu(menu_View);
        menuSelect_Player->setObjectName(QString::fromUtf8("menuSelect_Player"));
        menu_Navigate = new QMenu(menuBar);
        menu_Navigate->setObjectName(QString::fromUtf8("menu_Navigate"));
        menuNPCs = new QMenu(menu_Navigate);
        menuNPCs->setObjectName(QString::fromUtf8("menuNPCs"));
        menu_Help = new QMenu(menuBar);
        menu_Help->setObjectName(QString::fromUtf8("menu_Help"));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuTerrafirma->menuAction());
        menuBar->addAction(menu_View->menuAction());
        menuBar->addAction(menu_Navigate->menuAction());
        menuBar->addAction(menu_Help->menuAction());
        menuTerrafirma->addAction(menuOpen_World->menuAction());
        menuTerrafirma->addAction(action_Open);
        menuTerrafirma->addSeparator();
        menuTerrafirma->addAction(action_Quit);
        menu_View->addAction(actionUse_Textures);
        menu_View->addAction(actionShow_Houses);
        menu_View->addAction(actionShow_Wires);
        menu_View->addSeparator();
        menu_View->addAction(menuSelect_Player->menuAction());
        menu_View->addAction(actionFog_of_War);
        menu_View->addSeparator();
        menu_View->addAction(actionHilight_Block);
        menu_View->addAction(actionStop_Hilighting);
        menu_View->addSeparator();
        menu_View->addAction(actionWorld_Information);
        menu_View->addAction(actionWorld_Kill_Counts);
        menu_Navigate->addAction(actionJump_to_Spawn);
        menu_Navigate->addAction(actionJump_to_Dungeon);
        menu_Navigate->addAction(menuNPCs->menuAction());
        menu_Navigate->addSeparator();
        menu_Navigate->addAction(actionFind_Chest);
        menu_Help->addAction(actionAbout_Terrafirma);
        menu_Help->addSeparator();
        menu_Help->addAction(actionSettings);

        retranslateUi(MainWindow);
        QObject::connect(actionAbout_Terrafirma, SIGNAL(triggered()), MainWindow, SLOT(showAbout()));
        QObject::connect(action_Open, SIGNAL(triggered()), MainWindow, SLOT(openWorld()));
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindow, SLOT(close()));
        QObject::connect(actionFog_of_War, SIGNAL(toggled(bool)), map, SLOT(fogOfWar(bool)));
        QObject::connect(actionUse_Textures, SIGNAL(toggled(bool)), map, SLOT(useTextures(bool)));
        QObject::connect(actionFind_Chest, SIGNAL(triggered()), MainWindow, SLOT(findItem()));
        QObject::connect(actionHilight_Block, SIGNAL(triggered()), MainWindow, SLOT(hiliteBlock()));
        QObject::connect(actionJump_to_Dungeon, SIGNAL(triggered()), map, SLOT(jumpToDungeon()));
        QObject::connect(actionJump_to_Spawn, SIGNAL(triggered()), map, SLOT(jumpToSpawn()));
        QObject::connect(actionShow_Houses, SIGNAL(toggled(bool)), map, SLOT(showHouses(bool)));
        QObject::connect(actionShow_Wires, SIGNAL(toggled(bool)), map, SLOT(showWires(bool)));
        QObject::connect(actionStop_Hilighting, SIGNAL(triggered()), map, SLOT(stopHilighting()));
        QObject::connect(actionWorld_Information, SIGNAL(triggered()), MainWindow, SLOT(worldInfo()));
        QObject::connect(actionWorld_Kill_Counts, SIGNAL(triggered()), MainWindow, SLOT(worldKills()));
        QObject::connect(map, SIGNAL(loaded(bool)), actionFind_Chest, SLOT(setEnabled(bool)));
        QObject::connect(map, SIGNAL(loaded(bool)), actionHilight_Block, SLOT(setEnabled(bool)));
        QObject::connect(map, SIGNAL(loaded(bool)), actionJump_to_Dungeon, SLOT(setEnabled(bool)));
        QObject::connect(map, SIGNAL(loaded(bool)), actionJump_to_Spawn, SLOT(setEnabled(bool)));
        QObject::connect(map, SIGNAL(loaded(bool)), actionRefresh, SLOT(setEnabled(bool)));
        QObject::connect(map, SIGNAL(loaded(bool)), actionWorld_Information, SLOT(setEnabled(bool)));
        QObject::connect(map, SIGNAL(loaded(bool)), actionWorld_Kill_Counts, SLOT(setEnabled(bool)));
        QObject::connect(map, SIGNAL(loaded(bool)), action_Save_PNG, SLOT(setEnabled(bool)));
        QObject::connect(map, SIGNAL(hilighting(bool)), actionStop_Hilighting, SLOT(setEnabled(bool)));
        QObject::connect(map, SIGNAL(texturesUsed(bool)), actionShow_Houses, SLOT(setEnabled(bool)));
        QObject::connect(map, SIGNAL(texturesUsed(bool)), actionShow_Wires, SLOT(setEnabled(bool)));
        QObject::connect(map, SIGNAL(texturesAvailable(bool)), actionUse_Textures, SLOT(setEnabled(bool)));
        QObject::connect(map, SIGNAL(loaded(bool)), map, SLOT(setEnabled(bool)));
        QObject::connect(actionSettings, SIGNAL(triggered()), MainWindow, SLOT(showSettings()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Terrafirma", nullptr));
        action_Open->setText(QCoreApplication::translate("MainWindow", "&Open...", nullptr));
#if QT_CONFIG(shortcut)
        action_Open->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRefresh->setText(QCoreApplication::translate("MainWindow", "Refresh", nullptr));
#if QT_CONFIG(shortcut)
        actionRefresh->setShortcut(QCoreApplication::translate("MainWindow", "F5", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Save_PNG->setText(QCoreApplication::translate("MainWindow", "&Save PNG...", nullptr));
#if QT_CONFIG(shortcut)
        action_Save_PNG->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        action_Quit->setText(QCoreApplication::translate("MainWindow", "&Quit", nullptr));
#if QT_CONFIG(shortcut)
        action_Quit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actionUse_Textures->setText(QCoreApplication::translate("MainWindow", "Use Textures", nullptr));
#if QT_CONFIG(shortcut)
        actionUse_Textures->setShortcut(QCoreApplication::translate("MainWindow", "F1", nullptr));
#endif // QT_CONFIG(shortcut)
        actionShow_Houses->setText(QCoreApplication::translate("MainWindow", "Show NPC Houses", nullptr));
        actionShow_Wires->setText(QCoreApplication::translate("MainWindow", "Show Wires", nullptr));
        actionFog_of_War->setText(QCoreApplication::translate("MainWindow", "Fog of War", nullptr));
#if QT_CONFIG(shortcut)
        actionFog_of_War->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNo_Lighting->setText(QCoreApplication::translate("MainWindow", "No Lighting", nullptr));
        actionLighting->setText(QCoreApplication::translate("MainWindow", "Lighting", nullptr));
        actionColored_Lighting->setText(QCoreApplication::translate("MainWindow", "Colored Lighting", nullptr));
        actionHilight_Block->setText(QCoreApplication::translate("MainWindow", "Hilight Block...", nullptr));
#if QT_CONFIG(shortcut)
        actionHilight_Block->setShortcut(QCoreApplication::translate("MainWindow", "F2", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStop_Hilighting->setText(QCoreApplication::translate("MainWindow", "Stop Hilighting", nullptr));
#if QT_CONFIG(shortcut)
        actionStop_Hilighting->setShortcut(QCoreApplication::translate("MainWindow", "F3", nullptr));
#endif // QT_CONFIG(shortcut)
        actionWorld_Information->setText(QCoreApplication::translate("MainWindow", "World Information...", nullptr));
        actionWorld_Kill_Counts->setText(QCoreApplication::translate("MainWindow", "World Kill Counts...", nullptr));
        actionJump_to_Spawn->setText(QCoreApplication::translate("MainWindow", "Jump to Spawn", nullptr));
#if QT_CONFIG(shortcut)
        actionJump_to_Spawn->setShortcut(QCoreApplication::translate("MainWindow", "F6", nullptr));
#endif // QT_CONFIG(shortcut)
        actionJump_to_Dungeon->setText(QCoreApplication::translate("MainWindow", "Jump to Dungeon", nullptr));
        actionFind_Chest->setText(QCoreApplication::translate("MainWindow", "Find Chest...", nullptr));
        actionAbout_Terrafirma->setText(QCoreApplication::translate("MainWindow", "About Terrafirma...", nullptr));
        actionSettings->setText(QCoreApplication::translate("MainWindow", "Settings...", nullptr));
        menuTerrafirma->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuOpen_World->setTitle(QCoreApplication::translate("MainWindow", "Open &World", nullptr));
        menu_View->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        menuSelect_Player->setTitle(QCoreApplication::translate("MainWindow", "Select &Player", nullptr));
        menu_Navigate->setTitle(QCoreApplication::translate("MainWindow", "&Navigate", nullptr));
        menuNPCs->setTitle(QCoreApplication::translate("MainWindow", "NPCs", nullptr));
        menu_Help->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
