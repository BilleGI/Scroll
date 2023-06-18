#pragma once
#include <QMainWindow>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QSlider>

class CallerMainWindow : public QMainWindow
{
    Q_OBJECT
    QLCDNumber *lcdNumber = nullptr;
    QSlider *horizontalSlider = nullptr;
public:
    CallerMainWindow(QWidget* parrent);
public slots:
    void mySkroll();
};
