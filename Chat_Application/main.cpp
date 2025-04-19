#include "Chat_Application.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Chat_Application w;
    w.show();
    return a.exec();
}
