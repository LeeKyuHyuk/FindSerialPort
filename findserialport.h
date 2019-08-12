#ifndef FINDSERIALPORT_H
#define FINDSERIALPORT_H

#include <QMainWindow>

namespace Ui {
class FindSerialPort;
}

class FindSerialPort : public QMainWindow
{
    Q_OBJECT

public:
    explicit FindSerialPort(QWidget *parent = nullptr);
    ~FindSerialPort();

private:
    Ui::FindSerialPort *ui;
};

#endif // FINDSERIALPORT_H
