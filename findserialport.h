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

private slots:
    void on_actionRefresh_triggered();

private:
    Ui::FindSerialPort *ui;

    enum Columns
    {
        NAME, DESCRIPTION, MANUFACTURER
    };
};

#endif // FINDSERIALPORT_H
