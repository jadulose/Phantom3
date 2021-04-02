//
// Created by hamlet on 2021/4/2.
//

#ifndef PHANTOM3_RESOURCEWIDGET_H
#define PHANTOM3_RESOURCEWIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class ResourceWidget; }
QT_END_NAMESPACE

class ResourceWidget : public QWidget {
Q_OBJECT

public:
    explicit ResourceWidget(QWidget *parent = nullptr);

    ~ResourceWidget() override;

private:
    Ui::ResourceWidget *ui;
};

#endif //PHANTOM3_RESOURCEWIDGET_H
