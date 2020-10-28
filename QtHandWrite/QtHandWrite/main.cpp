#include "QtHandWrite.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	qputenv("QT_IM_MODULE", QByteArray("cqdlc"));
    QApplication a(argc, argv);
    QtHandWrite w;
    w.show();
    return a.exec();
}
