#include "DevAdmin.h"
#include "Settings.h"
#include "JsonWrapper.h"        //Load Settings
#include "WindowsConsole.h"     //Show Windows Console
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    JsonWrapper settings;
    settings.load("settings.json");     //hard coded
    if (settings.getProperty("IsDebugConsole") != NULL)
    {
        if (settings.getProperty("IsDebugConsole").asBool()==true)
            ShowConsole();
    }
    QApplication a(argc, argv);
    DevAdmin w;
    w.show();
    return a.exec();
}
