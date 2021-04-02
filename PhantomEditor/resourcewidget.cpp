//
// Created by hamlet on 2021/4/2.
//

// You may need to build the project (run Qt uic code generator) to get "ui_ResourceWidget.h" resolved

#include "resourcewidget.h"
#include "ui_resourcewidget.h"

ResourceWidget::ResourceWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::ResourceWidget) {
    ui->setupUi(this);
}

ResourceWidget::~ResourceWidget() {
    delete ui;
}
