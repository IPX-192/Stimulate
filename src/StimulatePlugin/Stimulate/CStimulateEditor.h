#ifndef CSTIMULATEEDITOR_H
#define CSTIMULATEEDITOR_H

#include <QWidget>
#include <QFrame>
#include <QLabel>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QFile>
#include"CNewStimulateProtocol.h"
#include"CWaveformEditor.h"


namespace Ui {
class CStimulateEditor;
}

class CStimulateEditor : public QWidget
{
    Q_OBJECT

public:
    explicit CStimulateEditor(QWidget *parent = nullptr);
    ~CStimulateEditor();

    // 基本参数框
    void addBasicParamItem();
    // 刺激段框
    void addStimulusSegmentItem();
    // 刺激波形示意框
    void addWaveformItem();

private slots:

    void on_cancelBtn_clicked();

    void on_newBtn_clicked();

    void on_toolButton_7_clicked();

    void on_startBtn_clicked();

private:
    Ui::CStimulateEditor *ui;
    CNewStimulateProtocol* m_pNewStimulateProtocol{nullptr};
    CWaveformEditor* m_pCWaveformEditor{nullptr};
};

#endif // CSTIMULATEEDITOR_H
