//==== Подключение библиотек ====
#include "calculator.h"
#include <QVBoxLayout>     // вертикальная раскладка
#include <QHBoxLayout>     // горизонтальная раскладка
#include <QWidget>         // базовый виджет
#include <QMessageBox>     // для сообщений об ошибках

//==== Глобальные переменные ====
#define HEIGHT 60

//==== Конструктор ====
Calculator::Calculator(QWidget *parent) //конструктор
    : QMainWindow(parent) //вызывает конструктор родителя
{
    // настройка окна
    this->setWindowTitle("Сложение чисел");
    this->resize(600, 170);

    //центральный виджет для layuot
    QWidget *central = new QWidget(this);
    this->setCentralWidget(central);

    //создание виджетов
    input1 = new QLineEdit(this);
    input1->setPlaceholderText("Введите первое слогаемое");

    input2 = new QLineEdit(this);
    input2->setPlaceholderText("Введите второе слогаемое");

    equalsButton = new QPushButton("=", this);

    resultLabel = new QLabel("Тут будет результат", this);
    resultLabel->setAlignment(Qt::AlignCenter);

    //задание высоты
    input1->setFixedHeight(HEIGHT);
    input2->setFixedHeight(HEIGHT);
    equalsButton->setFixedSize(HEIGHT*2,HEIGHT);

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
    connect(equalsButton, &QPushButton::clicked,this, &Calculator::onEqualsClicked);
}

//деструктор
Calculator::~Calculator()
{

}

//==== Пользовательские функции ====
//слот для кнопки = и проверка ввода данных
void Calculator::onEqualsClicked(){
    //проверяем на пустоту полей
    if (input1->text().isEmpty() || input2->text().isEmpty()){
        QMessageBox::warning(this, "Ошибка!", "Заполните оба поля");
        return;
    }

    //преобразуем текст в числа
    bool ok1, ok2;
    double num1 = input1->text().toDouble(&ok1);
    double num2 = input2->text().toDouble(&ok2);

    //проверка что это числа
    if (!ok1 || !ok2){
        QMessageBox::warning(this,"Ошибка","Введите корректные числа");
        return ;
    }
    //складываем
    double sum = num1 + num2;
    resultLabel->setText("Результат: " + QString::number(sum));

}






















