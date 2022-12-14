#pragma once

#include <QMainWindow>
#include "ui_Settings.h"

class Settings : public QMainWindow
{
	Q_OBJECT
protected:
	void closeEvent(QCloseEvent* event) override;

public:
	Settings(QWidget *parent = nullptr);
	~Settings();

private:
	Ui::SettingsClass ui;
};
