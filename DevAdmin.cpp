#include "DevAdmin.h"

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
