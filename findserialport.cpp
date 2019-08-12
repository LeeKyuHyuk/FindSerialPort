#include "findserialport.h"
#include "ui_findserialport.h"

#include <QSerialPortInfo>

FindSerialPort::FindSerialPort(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FindSerialPort)
{
    ui->setupUi(this);
    setWindowTitle("Find Serial Port");
    QStringList tableHeader;
    tableHeader << "Name" << "Description" << "Manufacturer";
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setHorizontalHeaderLabels(tableHeader);
    on_actionRefresh_triggered();
}

FindSerialPort::~FindSerialPort()
{
    delete ui;
}

void FindSerialPort::on_actionRefresh_triggered()
{
    int index;
    ui->tableWidget->setRowCount(0);
    foreach (const QSerialPortInfo &info, QSerialPortInfo::availablePorts()) {
        ui->tableWidget->insertRow(ui->tableWidget->rowCount());
        index = ui->tableWidget->rowCount() - 1;
        ui->tableWidget->setItem(index, NAME, new QTableWidgetItem(info.portName()));
        ui->tableWidget->setItem(index, DESCRIPTION, new QTableWidgetItem(info.description()));
        ui->tableWidget->setItem(index, MANUFACTURER, new QTableWidgetItem(info.manufacturer()));

    }
}
