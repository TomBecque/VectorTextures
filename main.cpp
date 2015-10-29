//#include "mainwindow.h"
#include <QApplication>
#include "planewindow.h"

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

//    return a.exec();


    QGuiApplication app(argc, argv);

    QSurfaceFormat format;
    format.setSamples(16);

    PlaneWindow window;
    window.setFormat(format);
    window.resize(640, 480);
    window.show();

    window.setAnimating(true);

    return app.exec();
}
