#ifndef CSTIMULATECOMPONENT_H
#define CSTIMULATECOMPONENT_H

#include "Plugin/CExpComponent.h"
#include "Plugin/CComponent.h"
#include "CStimulateEditor.h"

/******************************************
 * \class 	CProtocolComponent
 *
 * \brief	协议编辑插件
 *
 * \author	mxq
 * \date	2024-11-23
 ******************************************/
class CStimulateComponent : public Plugin::CExpComponent
{
    Q_OBJECT

public:
    CStimulateComponent(Plugin::CComponentInfo &info, QWidget *parent = nullptr);
    virtual ~CStimulateComponent();

    /***************************************
     * \brief	响应实验状态变化：开始，暂停，停止
     *
     ***************************************/
    void onRunStatusChanged() override;

public slots:
    /***************************************
     * \brief	接受信号选择，实验模块或文件中的实验信息进行保存
     *
     ***************************************/
    void onSettingExperiment(Experiment::CExperiment *pInExperiment) override;

    /***************************************
     * \brief	打开协议编辑的界面
     *
     ***************************************/
    void onOpenEditWidget();

private:
    CStimulateEditor* m_pStimulateWidget{nullptr};
};

#endif // CSTIMULATECOMPONENT_H
