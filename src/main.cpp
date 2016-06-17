#include "playerwindow.h"
#include "myserver.h"
#include <QtAV>
#include <QtAVWidgets>
#include <QApplication>

int main(int argc, char *argv[])
{

    QtAV::Widgets::registerRenderers();
    QApplication a(argc, argv);
    PlayerWindow player;
    player.show();
    player.resize(400, 600);

    return a.exec();
}
