#include "scroll.h"
#include "./ui_scroll.h"

CallerMainWindow::CallerMainWindow(QWidget* parrent) : QMainWindow(parrent)
{
    Ui::MainWindow caller;
    caller.setupUi(this);
    this->lcdNumber = caller.lcdNumber;
    this->horizontalSlider = caller.horizontalSlider;
    horizontalSlider->setPageStep(2);
    horizontalSlider->setTickInterval(1);
    horizontalSlider->setTickPosition(QSlider::TicksBelow);
}

void CallerMainWindow::mySkroll()
{
    lcdNumber->display(horizontalSlider->sliderPosition()*10);
}
