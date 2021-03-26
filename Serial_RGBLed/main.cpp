#include "dialog.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Dialog w;
    w.setFixedSize(606, 167);
    w.setWindowTitle("RGB LED Controller");
    w.show();

    return a.exec();
}
