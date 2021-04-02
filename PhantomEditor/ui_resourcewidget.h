/********************************************************************************
** Form generated from reading UI file 'resourcewidget.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCEWIDGET_H
#define UI_RESOURCEWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ResourceWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_return;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_2;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QGridLayout *gridLayout;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QSlider *horizontalSlider;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QWidget *ResourceWidget)
    {
        if (ResourceWidget->objectName().isEmpty())
            ResourceWidget->setObjectName(QString::fromUtf8("ResourceWidget"));
        ResourceWidget->resize(530, 399);
        verticalLayout = new QVBoxLayout(ResourceWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton_return = new QPushButton(ResourceWidget);
        pushButton_return->setObjectName(QString::fromUtf8("pushButton_return"));

        horizontalLayout->addWidget(pushButton_return);

        label = new QLabel(ResourceWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(178, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(ResourceWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        pushButton_2 = new QPushButton(ResourceWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_2 = new QLabel(ResourceWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        stackedWidget = new QStackedWidget(ResourceWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout = new QGridLayout(page);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        pushButton_3 = new QPushButton(ResourceWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_3->addWidget(pushButton_3);

        pushButton_4 = new QPushButton(ResourceWidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        horizontalLayout_3->addWidget(pushButton_4);

        horizontalSlider = new QSlider(ResourceWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_5 = new QPushButton(ResourceWidget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_6 = new QPushButton(ResourceWidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_3->addWidget(pushButton_6);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(ResourceWidget);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(ResourceWidget);
    } // setupUi

    void retranslateUi(QWidget *ResourceWidget)
    {
        ResourceWidget->setWindowTitle(QCoreApplication::translate("ResourceWidget", "ResourceWidget", nullptr));
        pushButton_return->setText(QCoreApplication::translate("ResourceWidget", "return", nullptr));
        label->setText(QCoreApplication::translate("ResourceWidget", "path", nullptr));
        lineEdit->setPlaceholderText(QCoreApplication::translate("ResourceWidget", "\360\237\224\215", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ResourceWidget", "search", nullptr));
        label_2->setText(QCoreApplication::translate("ResourceWidget", "20 items", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ResourceWidget", "list", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ResourceWidget", "thumbnail", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ResourceWidget", "new", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ResourceWidget", "delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ResourceWidget: public Ui_ResourceWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCEWIDGET_H
