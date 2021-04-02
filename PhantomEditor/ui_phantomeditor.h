/********************************************************************************
** Form generated from reading UI file 'phantomeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHANTOMEDITOR_H
#define UI_PHANTOMEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhantomEditor
{
public:
    QAction *actionExit;
    QAction *actionOpen;
    QAction *actionScenc_Editor;
    QAction *actionResource_Manager;
    QAction *actionAttribute_Editor;
    QAction *actionScript_Editor;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QWidget *central_widget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menuView;
    QStatusBar *statusbar;
    QDockWidget *dockWidget_scene;
    QWidget *dockWidgetContents_scene;
    QGridLayout *gridLayout_scene;
    QDockWidget *dockWidget_resource;
    QWidget *dockWidgetContents_resource;
    QGridLayout *gridLayout_resource;
    QDockWidget *dockWidget_attribute;
    QWidget *dockWidgetContents_attribute;
    QGridLayout *gridLayout_attribute;
    QDockWidget *dockWidget_script;
    QWidget *dockWidgetContents_script;
    QGridLayout *gridLayout_script;

    void setupUi(QMainWindow *PhantomEditor)
    {
        if (PhantomEditor->objectName().isEmpty())
            PhantomEditor->setObjectName(QString::fromUtf8("PhantomEditor"));
        PhantomEditor->resize(1011, 739);
        actionExit = new QAction(PhantomEditor);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionOpen = new QAction(PhantomEditor);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionScenc_Editor = new QAction(PhantomEditor);
        actionScenc_Editor->setObjectName(QString::fromUtf8("actionScenc_Editor"));
        actionScenc_Editor->setCheckable(true);
        actionScenc_Editor->setChecked(true);
        actionResource_Manager = new QAction(PhantomEditor);
        actionResource_Manager->setObjectName(QString::fromUtf8("actionResource_Manager"));
        actionResource_Manager->setCheckable(true);
        actionResource_Manager->setChecked(true);
        actionAttribute_Editor = new QAction(PhantomEditor);
        actionAttribute_Editor->setObjectName(QString::fromUtf8("actionAttribute_Editor"));
        actionAttribute_Editor->setCheckable(true);
        actionAttribute_Editor->setChecked(true);
        actionScript_Editor = new QAction(PhantomEditor);
        actionScript_Editor->setObjectName(QString::fromUtf8("actionScript_Editor"));
        actionScript_Editor->setCheckable(true);
        actionScript_Editor->setChecked(true);
        centralwidget = new QWidget(PhantomEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        central_widget = new QWidget(centralwidget);
        central_widget->setObjectName(QString::fromUtf8("central_widget"));

        gridLayout->addWidget(central_widget, 0, 0, 1, 1);

        PhantomEditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PhantomEditor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1011, 27));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        PhantomEditor->setMenuBar(menubar);
        statusbar = new QStatusBar(PhantomEditor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PhantomEditor->setStatusBar(statusbar);
        dockWidget_scene = new QDockWidget(PhantomEditor);
        dockWidget_scene->setObjectName(QString::fromUtf8("dockWidget_scene"));
        dockWidgetContents_scene = new QWidget();
        dockWidgetContents_scene->setObjectName(QString::fromUtf8("dockWidgetContents_scene"));
        gridLayout_scene = new QGridLayout(dockWidgetContents_scene);
        gridLayout_scene->setObjectName(QString::fromUtf8("gridLayout_scene"));
        gridLayout_scene->setContentsMargins(0, 0, 0, 0);
        dockWidget_scene->setWidget(dockWidgetContents_scene);
        PhantomEditor->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_scene);
        dockWidget_resource = new QDockWidget(PhantomEditor);
        dockWidget_resource->setObjectName(QString::fromUtf8("dockWidget_resource"));
        dockWidgetContents_resource = new QWidget();
        dockWidgetContents_resource->setObjectName(QString::fromUtf8("dockWidgetContents_resource"));
        gridLayout_resource = new QGridLayout(dockWidgetContents_resource);
        gridLayout_resource->setObjectName(QString::fromUtf8("gridLayout_resource"));
        gridLayout_resource->setContentsMargins(0, 0, 0, 0);
        dockWidget_resource->setWidget(dockWidgetContents_resource);
        PhantomEditor->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_resource);
        dockWidget_attribute = new QDockWidget(PhantomEditor);
        dockWidget_attribute->setObjectName(QString::fromUtf8("dockWidget_attribute"));
        dockWidgetContents_attribute = new QWidget();
        dockWidgetContents_attribute->setObjectName(QString::fromUtf8("dockWidgetContents_attribute"));
        gridLayout_attribute = new QGridLayout(dockWidgetContents_attribute);
        gridLayout_attribute->setObjectName(QString::fromUtf8("gridLayout_attribute"));
        gridLayout_attribute->setContentsMargins(0, 0, 0, 0);
        dockWidget_attribute->setWidget(dockWidgetContents_attribute);
        PhantomEditor->addDockWidget(Qt::RightDockWidgetArea, dockWidget_attribute);
        dockWidget_script = new QDockWidget(PhantomEditor);
        dockWidget_script->setObjectName(QString::fromUtf8("dockWidget_script"));
        dockWidgetContents_script = new QWidget();
        dockWidgetContents_script->setObjectName(QString::fromUtf8("dockWidgetContents_script"));
        gridLayout_script = new QGridLayout(dockWidgetContents_script);
        gridLayout_script->setObjectName(QString::fromUtf8("gridLayout_script"));
        gridLayout_script->setContentsMargins(0, 0, 0, 0);
        dockWidget_script->setWidget(dockWidgetContents_script);
        PhantomEditor->addDockWidget(Qt::RightDockWidgetArea, dockWidget_script);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menuView->menuAction());
        menu->addAction(actionOpen);
        menu->addSeparator();
        menu->addAction(actionExit);
        menuView->addAction(actionScenc_Editor);
        menuView->addAction(actionResource_Manager);
        menuView->addAction(actionAttribute_Editor);
        menuView->addAction(actionScript_Editor);

        retranslateUi(PhantomEditor);
        QObject::connect(actionExit, &QAction::triggered, PhantomEditor, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(PhantomEditor);
    } // setupUi

    void retranslateUi(QMainWindow *PhantomEditor)
    {
        PhantomEditor->setWindowTitle(QCoreApplication::translate("PhantomEditor", "Phantom Editor", nullptr));
        actionExit->setText(QCoreApplication::translate("PhantomEditor", "Exit", nullptr));
#if QT_CONFIG(shortcut)
        actionExit->setShortcut(QCoreApplication::translate("PhantomEditor", "Esc", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen->setText(QCoreApplication::translate("PhantomEditor", "Open", nullptr));
        actionScenc_Editor->setText(QCoreApplication::translate("PhantomEditor", "Scene Editor", nullptr));
        actionResource_Manager->setText(QCoreApplication::translate("PhantomEditor", "Resource Manager", nullptr));
        actionAttribute_Editor->setText(QCoreApplication::translate("PhantomEditor", "Attribute Editor", nullptr));
        actionScript_Editor->setText(QCoreApplication::translate("PhantomEditor", "Script Editor", nullptr));
        menu->setTitle(QCoreApplication::translate("PhantomEditor", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("PhantomEditor", "View", nullptr));
        dockWidget_scene->setWindowTitle(QCoreApplication::translate("PhantomEditor", "Scene Editor", nullptr));
        dockWidget_resource->setWindowTitle(QCoreApplication::translate("PhantomEditor", "Resource Manager", nullptr));
        dockWidget_attribute->setWindowTitle(QCoreApplication::translate("PhantomEditor", "Attribute Editor", nullptr));
        dockWidget_script->setWindowTitle(QCoreApplication::translate("PhantomEditor", "Script Editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhantomEditor: public Ui_PhantomEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHANTOMEDITOR_H
