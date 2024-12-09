#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setWindowTitle("");
    setFixedSize(240, 220);

    nameFunctionType = new QLabel("Выберите тип функции:", this);
    nameFunctionType->setGeometry(20, 20, 200, 20);
    nameFunctionType->setAlignment(Qt::AlignHCenter);

    chooseSin = new QRadioButton("Синус", this);
    chooseSin->setGeometry(20, 40, 100, 20);
    chooseSin->setChecked(true);

    chooseSi = new QRadioButton("Интегр. синус", this);
    chooseSi->setGeometry(120, 40, 100, 20);

    nameAccuracy = new QLabel("Задайте точность вычисления:         ", this);
    nameAccuracy->setGeometry(20, 70, 200, 20);
    nameAccuracy->setAlignment(Qt::AlignHCenter);

    inputAccuracy = new QLineEdit("1", this);
    inputAccuracy->setGeometry(195, 70, 20, 20);

    nameValue = new QLabel("Задайте значение:           +           i", this);
    nameValue->setGeometry(20, 100, 200, 20);
    nameValue->setAlignment(Qt::AlignHCenter);

    inputValueRe = new QLineEdit("1", this);
    inputValueRe->setGeometry(133, 100, 30, 20);

    inputValueIm = new QLineEdit("0", this);
    inputValueIm->setGeometry(175, 100, 30, 20);

    buttonCalculate = new QPushButton("Вычислить!", this);
    buttonCalculate->setGeometry(20, 130, 200, 20);

    output = new QLabel("", this);
    output->setGeometry(20, 160, 200, 40);
    output->setAlignment(Qt::AlignVCenter | Qt::AlignHCenter);

    connect(chooseSin, SIGNAL(pressed()), this, SLOT(setSin()));
    connect(chooseSi, SIGNAL(pressed()), this, SLOT(setSi()));
    connect(buttonCalculate, SIGNAL(pressed()), this, SLOT(setCalculate()));
}

MainWindow::~MainWindow()
{
    delete nameFunctionType;
    delete nameAccuracy;
    delete nameValue;
    delete inputAccuracy;
    delete inputValueRe;
    delete inputValueIm;
    delete buttonCalculate;
    delete chooseSin;
    delete chooseSi;
    delete output;
}

void MainWindow::setSin()
{
    QString str("Теперь будет вычисляться синус");
    output->setText(str);
}

void MainWindow::setSi()
{
    QString str("Теперь будет вычисляться\nинтегральный синус");
    output->setText(str);
}

void MainWindow::setCalculate()
{
    QString str("");

    if (chooseSin->isChecked()) {
        //Sin<Complex> sinnn(1);
        str += "Не готово!";
    }
    else {
        str += "Тоже не готово!";
    }

    output->setText(str);
}
