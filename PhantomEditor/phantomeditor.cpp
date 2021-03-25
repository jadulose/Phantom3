//
// Created by Hamlet on 2021/3/25.
//

// You may need to build the project (run Qt uic code generator) to get "ui_PhantomEditor.h" resolved

#include "phantomeditor.h"
#include "ui_phantomeditor.h"

PhantomEditor::PhantomEditor(QWidget *parent) :
        QMainWindow(parent), ui(new Ui::PhantomEditor) {
    ui->setupUi(this);
}

PhantomEditor::~PhantomEditor() {
    delete ui;
}
