#pragma once

#include <QMainWindow>
#include "ui_Settings.h"

class Settings : public QMainWindow
{
	Q_OBJECT

public:
	Settings(QWidget *parent = nullptr);
	~Settings();

private:
	Ui::SettingsClass ui;
};
