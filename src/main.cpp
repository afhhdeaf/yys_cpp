#include "inc/mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.setWindowTitle("Raven的痒痒鼠");
    w.show();

    return a.exec();
}
