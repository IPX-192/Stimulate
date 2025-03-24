#ifndef CSTIMULATETEMPTABLEPANEL_H
#define CSTIMULATETEMPTABLEPANEL_H

#include <QObject>
#include <vector>
#include "TableView/CTableViewBasic.h"

class CStimulateTempTablePanel : public CTableViewBasic
{
public:
    CStimulateTempTablePanel(QWidget* parentWidget);
    /***************************************
    * \brief      用户个性化设置，子类可以继承在表格中操作
    ***************************************/
    virtual void customInit() override;
    void showTemplateTable();
};

#endif // CSTIMULATETEMPTABLEPANEL_H
