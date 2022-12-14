#include "Settings.h"
#include "JsonWrapper.h"
#include <iostream>
#include <QDebug>

Settings::Settings(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	////Load settings file
	std::string settingsFile = ui.lineSettingsFile->text().toStdString();
	JsonWrapper settings;
	settings.load(ui.lineSettingsFile->text().toStdString());
	if (JsonWrapper::isFile(settingsFile))
	{
		settings.load(ui.lineSettingsFile->text().toStdString());
		if (settings.getProperty("IsDebugConsole")!=NULL)
		{
			ui.checkDebugConsole->setChecked(settings.getProperty("IsDebugConsole").asBool());
		}
		if (settings.getProperty("PathToPowershellExe"))
		{
			ui.linePathToPowershellExe->setText(QString::fromUtf8(settings.getProperty("PathToPowershellExe").asCString()));
		}
	}
}

void Settings::closeEvent(QCloseEvent* event)
{
	//save settingsfile
	std::string settingsFile = ui.lineSettingsFile->text().toStdString();
	if (settingsFile.size() != 0)
	{
		JsonWrapper settings;
		auto r = settings.add<double>(2.2, 3.3);
		settings.setProperty("PathToPowershellExe", ui.linePathToPowershellExe->text().toStdString());
		settings.setProperty("IsDebugConsole", ui.checkDebugConsole->isChecked() ? true : false);
		settings.save(ui.lineSettingsFile->text().toStdString());
	}
}

Settings::~Settings()
{}
