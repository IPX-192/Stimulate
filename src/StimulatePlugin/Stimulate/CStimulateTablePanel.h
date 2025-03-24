#ifndef CSTIMULATETABLEPANEL_H
#define CSTIMULATETABLEPANEL_H

#include <QObject>
#include <vector>
#include "TableView/CTableViewBasic.h"

class CStimulateTablePanel : public CTableViewBasic
{
public:
    CStimulateTablePanel(QWidget* parentWidget);
    virtual ~CStimulateTablePanel();
    /***************************************
    * \brief      用户个性化设置，子类可以继承在表格中操作
    ***************************************/
    virtual void customInit() override;
    void displayResultData();

};

#endif // CSTIMULATETABLEPANEL_H
