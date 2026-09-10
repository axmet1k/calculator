//==== Подключение библиотек ====
#include "calculator.h"

#include <QApplication>

//==== Главная функция ====
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Calculator w;
    w.show();
    return a.exec();
}
