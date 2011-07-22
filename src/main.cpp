#include <QtGui/QApplication>
#include "mainwindow.h"
 #include <QTranslator>
#include <QApplication>
#include <sys/stat.h>


int main(int argc, char *argv[])
{

    QApplication app(argc, argv);

    QTranslator translator;
    translator.load(QString("sdi_")+QLocale::system().name());
    app.installTranslator(&translator);

    QTranslator qtTranslator;
    qtTranslator.load(QString("qt_es")+QLocale::system().name());
    app.installTranslator(&qtTranslator);    


    //crea directorio  /tmp/wifiscan
    int foo;
    foo=mkdir("/tmp/wifiscan", 0700);  
        cout << "mkdir = "<<foo<<endl;


    MainWindow w;
    w.show();


    return app.exec();
}
