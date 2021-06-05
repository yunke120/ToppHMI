#include "cameraui.h"
#include "ui_cameraui.h"

CameraUI::CameraUI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CameraUI)
{
    ui->setupUi(this);
}

CameraUI::~CameraUI()
{
    delete ui;
}
