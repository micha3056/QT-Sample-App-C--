#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DevAdmin.h"

class DevAdmin : public QMainWindow
{
    Q_OBJECT

public:
    DevAdmin(QWidget *parent = nullptr);
    ~DevAdmin();

private:
    Ui::DevAdminClass ui;
};
