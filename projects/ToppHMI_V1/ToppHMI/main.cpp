#include "topphmi.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ToppHMI w;
    w.show();
    return a.exec();
}
