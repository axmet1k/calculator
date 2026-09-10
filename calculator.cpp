//==== Подключение библиотек ====
#include "calculator.h"
#include <QVBoxLayout>     // вертикальная раскладка
#include <QHBoxLayout>     // горизонтальная раскладка
#include <QWidget>         // базовый виджет
#include <QMessageBox>     // для сообщений об ошибках

//==== Конструктор ====
Calculator::Calculator(QWidget *parent) //конструктор
    : QMainWindow(parent) //вызывает конструктор родителя
{
    // настройка окна
    this->setWindowTitle("Сложение чисел");
    this->resize(600, 200);

    //центральный виджет для layuot
    QWidget *central = new QWidget(this);
    this->setCentralWidget(central);

    //создание виджетов
    input1 = new QLineEdit(this);
    input1->setPlaceholderText("Введите первое слогаемое");

    input2 = new QLineEdit(this);
    input2->setPlaceholderText("Введите второе слогаемое");

    equalsButton = new QPushButton("=", this);

    resultLabel = new QLabel("Результат", this);
    resultLabel->setAlignment(Qt::AlignCenter);

    //раскладка
    QVBoxLayout *mainLayout = new QVBoxLayout(central);
    QHBoxLayout *inputLayout = new QHBoxLayout();

    inputLayout->addWidget(input1);
    inputLayout->addWidget(new QLabel("+", this));
    inputLayout->addWidget(input2);
    inputLayout->addWidget(equalsButton);

    mainLayout->addLayout(inputLayout);
    mainLayout->addWidget(resultLabel);

    //
    //connect(equalsButton, &QPushButton::clicked,
    //        this, &Calculator::onEqualsClicked());
}

//деструктор
Calculator::~Calculator()
{

}






















