#include "tictactoewindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QApplication a(argc, argv);
    TicTacToeWindow w;
    w.show();

    return a.exec();
}
