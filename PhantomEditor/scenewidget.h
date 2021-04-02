//
// Created by hamlet on 2021/4/2.
//

#ifndef PHANTOM3_SCENEWIDGET_H
#define PHANTOM3_SCENEWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class SceneWidget; }
QT_END_NAMESPACE

class SceneWidget : public QWidget {
Q_OBJECT

public:
    explicit SceneWidget(QWidget *parent = nullptr);

    ~SceneWidget() override;

private:
    Ui::SceneWidget *ui;
};

#endif //PHANTOM3_SCENEWIDGET_H
