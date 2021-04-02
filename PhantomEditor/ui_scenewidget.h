/********************************************************************************
** Form generated from reading UI file 'scenewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCENEWIDGET_H
#define UI_SCENEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SceneWidget
{
public:
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *SceneWidget)
    {
        if (SceneWidget->objectName().isEmpty())
            SceneWidget->setObjectName(QString::fromUtf8("SceneWidget"));
        SceneWidget->resize(400, 300);
        horizontalLayout = new QHBoxLayout(SceneWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(114, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton = new QPushButton(SceneWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer_2 = new QSpacerItem(114, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        retranslateUi(SceneWidget);

        QMetaObject::connectSlotsByName(SceneWidget);
    } // setupUi

    void retranslateUi(QWidget *SceneWidget)
    {
        SceneWidget->setWindowTitle(QCoreApplication::translate("SceneWidget", "SceneWidget", nullptr));
        pushButton->setText(QCoreApplication::translate("SceneWidget", "this is Scene Editor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SceneWidget: public Ui_SceneWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCENEWIDGET_H
