#include "CStimulateEditor.h"
#include "CWaveformEditor.h"
#include "CNewStimulateProtocol.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QFile styleSheet(":/css/css/black.css");
    if (styleSheet.open(QFile::ReadOnly | QFile::Text)) {
        QString style = styleSheet.readAll();
        a.setStyleSheet(style);
    }

    CStimulateEditor A;
    A.show();
    // CWaveformEditor B;
    // B.show();
    // CNewStimulateProtocol w;
    // w.show();
    return a.exec();
}
