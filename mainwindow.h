#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QRadioButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

    QLabel *nameFunctionType, *nameAccuracy, *nameValue, *output;
    QLineEdit *inputAccuracy, *inputValueRe, *inputValueIm;
    QPushButton *buttonCalculate;
    QRadioButton *chooseSin, *chooseSi;

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void setSin();
    void setSi();
    void setCalculate();
};
#endif // MAINWINDOW_H
