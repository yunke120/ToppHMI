#include "topphmi.h"
#include "ui_topphmi.h"

ToppHMI::ToppHMI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ToppHMI)
{
    ui->setupUi(this);
}

ToppHMI::~ToppHMI()
{
    delete ui;
}

