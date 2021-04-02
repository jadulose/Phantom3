//
// Created by Hamlet on 2021/3/25.
//

#ifndef PHANTOM3_PHANTOMEDITOR_H
#define PHANTOM3_PHANTOMEDITOR_H

#include <QMainWindow>
#include "scenewidget.h"
#include "resourcewidget.h"

QT_BEGIN_NAMESPACE
namespace Ui { class PhantomEditor; }
QT_END_NAMESPACE

class PhantomEditor : public QMainWindow {
Q_OBJECT

public:
    explicit PhantomEditor(QWidget *parent = nullptr);

    ~PhantomEditor() override;

private slots:
    void checkViewsAreShowing();
    void showScenceEditor();
    void showResourceEditor();

private:
    Ui::PhantomEditor *ui;
    SceneWidget *sceneWidget;
    ResourceWidget *resourceWidget;
};

#endif //PHANTOM3_PHANTOMEDITOR_H
