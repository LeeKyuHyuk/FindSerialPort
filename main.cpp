#include "findserialport.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FindSerialPort w;
    w.show();

    return a.exec();
}
