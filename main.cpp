#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
 MainWindow w;

    w.setTitle();
    w.setWindowIcon(QIcon(":/icon2.png"));

    w.show();


    return a.exec();
}
