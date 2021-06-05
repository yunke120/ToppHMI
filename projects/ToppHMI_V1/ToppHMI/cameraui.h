#ifndef CAMERAUI_H
#define CAMERAUI_H

#include <QDialog>

namespace Ui {
class CameraUI;
}

class CameraUI : public QDialog
{
    Q_OBJECT

public:
    explicit CameraUI(QWidget *parent = nullptr);
    ~CameraUI();

private:
    Ui::CameraUI *ui;
};

#endif // CAMERAUI_H
