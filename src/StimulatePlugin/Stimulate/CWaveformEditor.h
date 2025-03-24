#ifndef CWAVEFORMEDITOR_H
#define CWAVEFORMEDITOR_H

#include <QWidget>
#include "CStimulateTablePanel.h"


namespace Ui {
class CWaveformEditor;
}

class CWaveformEditor : public QWidget
{
    Q_OBJECT

public:
    explicit CWaveformEditor(QWidget *parent = nullptr);
    ~CWaveformEditor();

    void paintItem();

private slots:
    void on_toolButton_2_clicked();

    void on_leftBtn_clicked();

    void on_rightBtn_clicked();

    void on_cancelBtn_clicked();

    void on_startBtn_clicked();


    void on_toolButton_clicked();

private:
    Ui::CWaveformEditor *ui;
};

#endif // CWAVEFORMEDITOR_H
