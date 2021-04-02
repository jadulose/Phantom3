//
// Created by Hamlet on 2021/3/25.
//

#include <QApplication>
#include "phantomeditor.h"
//#include <phtcore.h>
//#include <phtdatabase.h>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    PhantomEditor pht_editor;
    pht_editor.show();
    return QApplication::exec();
}
