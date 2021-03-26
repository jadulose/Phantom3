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
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhantomEditor
{
public:
    QAction *actionExit;
    QAction *actionOpen;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_3;
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
        actionOpen = new QAction(PhantomEditor);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        centralwidget = new QWidget(PhantomEditor);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(318, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(16);
        label->setFont(font);

        verticalLayout->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        verticalLayout->setStretch(0, 3);
        verticalLayout->setStretch(1, 1);
        verticalLayout->setStretch(2, 1);
        verticalLayout->setStretch(3, 1);
        verticalLayout->setStretch(4, 3);

        horizontalLayout->addLayout(verticalLayout);

        horizontalSpacer_2 = new QSpacerItem(318, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        PhantomEditor->setCentralWidget(centralwidget);
        menubar = new QMenuBar(PhantomEditor);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 27));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        PhantomEditor->setMenuBar(menubar);
        statusbar = new QStatusBar(PhantomEditor);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        PhantomEditor->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menu->addAction(actionOpen);
        menu->addSeparator();
        menu->addAction(actionExit);

        retranslateUi(PhantomEditor);
        QObject::connect(pushButton, &QPushButton::clicked, PhantomEditor, qOverload<>(&QMainWindow::close));

        QMetaObject::connectSlotsByName(PhantomEditor);
    } // setupUi

    void retranslateUi(QMainWindow *PhantomEditor)
    {
        PhantomEditor->setWindowTitle(QCoreApplication::translate("PhantomEditor", "Phantom Editor", nullptr));
        actionExit->setText(QCoreApplication::translate("PhantomEditor", "Exit", nullptr));
        actionOpen->setText(QCoreApplication::translate("PhantomEditor", "Open", nullptr));
        label->setText(QCoreApplication::translate("PhantomEditor", "\344\275\240\345\245\275\357\274\214\344\270\226\347\225\214\357\274\201", nullptr));
        pushButton->setText(QCoreApplication::translate("PhantomEditor", "\347\202\271\346\210\221", nullptr));
        menu->setTitle(QCoreApplication::translate("PhantomEditor", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhantomEditor: public Ui_PhantomEditor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHANTOMEDITOR_H
