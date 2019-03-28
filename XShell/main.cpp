#include <iostream>
#include <QApplication>
#include <QtGui>
#include <QWidget>

/*
如果一个widget直接被创建，没有父控件，
那么它将被当做一个窗口对待，或者顶层控件，在当它显示的时候
因为它没有父对象来保证在他不被需要的时候能够删除，
它需要开发者在应用程序中跟踪顶层控件
*/
using namespace std;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QWidget window;

    /*设置窗口默认大小*/
    window.resize(550, 800);
    window.show();

    /*设置窗口标题*/
    window.setWindowTitle("XShell");
    return QApplication::exec();
}
