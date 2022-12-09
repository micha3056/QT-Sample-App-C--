#include "DevAdmin.h"
#include "Settings.h"

#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DevAdmin w;
    w.show();
    return a.exec();
}
