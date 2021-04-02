//
// Created by hamlet on 2021/4/2.
//

// You may need to build the project (run Qt uic code generator) to get "ui_SceneWidget.h" resolved

#include "scenewidget.h"
#include "ui_scenewidget.h"

SceneWidget::SceneWidget(QWidget *parent) :
        QWidget(parent), ui(new Ui::SceneWidget) {
    ui->setupUi(this);
}

SceneWidget::~SceneWidget() {
    delete ui;
}
