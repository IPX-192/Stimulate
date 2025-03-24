#include"CStimulateEditor.h"
#include"CWaveformEditor.h"
#include"CNewStimulateProtocol.h"
#include<QApplication>
#include<QFile>
#include<QString>

QString loadQSS()
{
    QFile file(":/css/css/stimulatePages.css");
    file.open(QFile::ReadOnly);
    QString style = file.readAll();
    file.close();
    return style;
}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyleSheet(loadQSS());
    // CMembraneTestControlArea* p =new CMembraneTestControlArea;
    // p->show();

    CStimulateEditor* w= new CStimulateEditor;
    w->show();
    // CWaveformEditor* p =new CWaveformEditor;
    // p->show();

    return a.exec();

}
