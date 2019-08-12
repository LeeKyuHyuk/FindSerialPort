#include "findserialport.h"
#include "ui_findserialport.h"

FindSerialPort::FindSerialPort(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FindSerialPort)
{
    ui->setupUi(this);
}

FindSerialPort::~FindSerialPort()
{
    delete ui;
}
