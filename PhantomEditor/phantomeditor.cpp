//
// Created by Hamlet on 2021/3/25.
//

// You may need to build the project (run Qt uic code generator) to get "ui_PhantomEditor.h" resolved

#include "phantomeditor.h"
#include "ui_phantomeditor.h"

PhantomEditor::PhantomEditor(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::PhantomEditor),
        sceneWidget(new SceneWidget(this)),
        resourceWidget(new ResourceWidget(this)) {
    ui->setupUi(this);
    ui->gridLayout_scene->addWidget(sceneWidget);
    ui->gridLayout_resource->addWidget(resourceWidget);
    connect(ui->menuView, SIGNAL(aboutToShow()), this, SLOT(checkViewsAreShowing()));
    connect(ui->actionScenc_Editor, SIGNAL(changed()), this, SLOT(showScenceEditor()));
    connect(ui->actionResource_Manager, SIGNAL(changed()), this, SLOT(showResourceEditor()));
    this->showMaximized();
}

PhantomEditor::~PhantomEditor() {
    delete ui;
}

void PhantomEditor::checkViewsAreShowing() {
    ui->actionScenc_Editor->setChecked(ui->dockWidget_scene->isVisible());
    ui->actionResource_Manager->setChecked(ui->dockWidget_resource->isVisible());
}

void PhantomEditor::showScenceEditor() {
    ui->dockWidget_scene->setVisible(ui->actionScenc_Editor->isChecked());
}

void PhantomEditor::showResourceEditor() {
    ui->dockWidget_resource->setVisible(ui->actionResource_Manager->isChecked());
}
