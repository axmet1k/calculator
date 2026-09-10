#ifndef CALCULATOR_H
#define CALCULATOR_H
//===== Подключение библиотек =====
#include <QMainWindow>

//==== Класс главного окна ====
class  Сalculator : public QMainWindow
{
    Q_OBJECT

public:
    // конструктор - вызывается при создании окна
    Сalculator(QWidget *parent = nullptr);
    // деструктор - вызывается при закрытии окна
    ~Сalculator();

private slots: //секуия для слотов


private: //приватные поля класса

};
#endif // CALCULATOR_H
