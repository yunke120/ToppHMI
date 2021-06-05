#ifndef TOPPHMI_H
#define TOPPHMI_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ToppHMI; }
QT_END_NAMESPACE

class ToppHMI : public QMainWindow
{
    Q_OBJECT

public:
    ToppHMI(QWidget *parent = nullptr);
    ~ToppHMI();

private:
    Ui::ToppHMI *ui;
};
#endif // TOPPHMI_H
