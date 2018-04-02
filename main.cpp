#include "lol.h"
#include <QApplication>
#include <QVBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    lol w;
    w.show();


    return a.exec();
}
