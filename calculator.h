#ifndef CALCULATOR_H
#define CALCULATOR_H
//===== Подключение библиотек =====
#include <QMainWindow>
#include <QLineEdit>
#include <QLabel>
#include <QPushButton>

//==== Класс главного окна ====
class  Calculator : public QMainWindow
{
    Q_OBJECT

public:
    // конструктор - вызывается при создании окна
    Calculator(QWidget *parent = nullptr);
    // деструктор - вызывается при закрытии окна
    ~Calculator();

private slots: //секуия для слотов
    void onEqualsClicked(); //слот для кнопки

private: //приватные поля класса
    QLineEdit *input1; //первое поле ввода
    QLineEdit *input2; //второе поле ввода
    QLabel *resultLabel; //вывод результата
    QPushButton *equalsButton; //кнопка =
};
#endif // CALCULATOR_H
