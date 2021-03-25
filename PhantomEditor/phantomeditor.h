//
// Created by Hamlet on 2021/3/25.
//

#ifndef PHANTOM3_PHANTOMEDITOR_H
#define PHANTOM3_PHANTOMEDITOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class PhantomEditor; }
QT_END_NAMESPACE

class PhantomEditor : public QMainWindow {
Q_OBJECT

public:
    explicit PhantomEditor(QWidget *parent = nullptr);

    ~PhantomEditor() override;

private:
    Ui::PhantomEditor *ui;
};

#endif //PHANTOM3_PHANTOMEDITOR_H
