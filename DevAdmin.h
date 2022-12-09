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

private slots:
    void on_pushButton_Options_clicked();
    void on_pushButton_Add_clicked();
};
