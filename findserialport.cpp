#include "findserialport.h"
#include "ui_findserialport.h"

#include <QDebug>
#include <QSerialPortInfo>

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

void FindSerialPort::on_actionRefresh_triggered()
{

    qDebug() << "========\nRefresh!\n========";
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        qDebug() << "Name : " << info.portName();
        qDebug() << "Description : " << info.description();
        qDebug() << "Manufacturer: " << info.manufacturer();
    }
}
