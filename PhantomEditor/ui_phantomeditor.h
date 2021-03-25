/********************************************************************************
** Form generated from reading UI file 'phantomeditor.ui'
**
** Created by: Qt User Interface Compiler version 6.0.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHANTOMEDITOR_H
#define UI_PHANTOMEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhantomEditor
{
public:
    QAction *actionExit;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *PhantomEditor)
    {
        if (PhantomEditor->objectName().isEmpty())
            PhantomEditor->setObjectName(QString::fromUtf8("PhantomEditor"));
        PhantomEditor->resize(800, 600);
        actionExit = new QAction(PhantomEditor);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        centralwidget = new QWidget(PhantomEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(318, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        horizontalSpacer_2 = new QSpacerItem(318, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        PhantomEditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PhantomEditor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        PhantomEditor->setMenuBar(menubar);
        statusbar = new QStatusBar(PhantomEditor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PhantomEditor->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionExit);

        retranslateUi(PhantomEditor);

        QMetaObject::connectSlotsByName(PhantomEditor);
    } // setupUi

    void retranslateUi(QMainWindow *PhantomEditor)
    {
        PhantomEditor->setWindowTitle(QCoreApplication::translate("PhantomEditor", "Phantom Editor", nullptr));
        actionExit->setText(QCoreApplication::translate("PhantomEditor", "Exit", nullptr));
        label->setText(QCoreApplication::translate("PhantomEditor", "Hello, world!", nullptr));
        menu->setTitle(QCoreApplication::translate("PhantomEditor", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhantomEditor: public Ui_PhantomEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHANTOMEDITOR_H
