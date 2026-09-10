#include "calculator.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Сalculator w;
    w.show();
    return a.exec();
}
