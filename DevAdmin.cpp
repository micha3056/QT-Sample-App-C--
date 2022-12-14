#include "DevAdmin.h"
#include "Settings.h"
#include <QDebug>
#include <QMessageBox>
#include "Powershell.h"

DevAdmin::DevAdmin(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    this->setCentralWidget(ui.centralWidget);

    //Align Text under buttons
    //ui.toolButton_Add->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
}

DevAdmin::~DevAdmin()
{}

void callMessageBox()
{
    QMessageBox msgBox;
    msgBox.setText("The document has been modified.");
    msgBox.setStandardButtons(QMessageBox::Cancel);
    int ret = msgBox.exec();
}

void DevAdmin::on_pushButton_Options_clicked()
{
    //callMessageBox();
    auto settingsDialog = new Settings(this);
    settingsDialog->show();
}

void DevAdmin::on_pushButton_Add_clicked()
{
    callMessageBox();
}

void DevAdmin::on_pushButton_killPort_clicked()
{
    killPort(3000);
}
