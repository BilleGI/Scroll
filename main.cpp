#include <QApplication>
#include "scroll.h"
int main(int argc, char** argv)
{
    QApplication app(argc, argv);
    CallerMainWindow window(nullptr);
    window.setFixedSize(100,200);
    window.show();
    return app.exec();
}
