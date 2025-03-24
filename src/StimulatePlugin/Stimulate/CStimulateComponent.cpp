#include <QDebug>
#include "CStimulateComponent.h"
#include "IMainWndDelegate.h"

using namespace Plugin;

CStimulateComponent::CStimulateComponent(Plugin::CComponentInfo &info, QWidget *parent):
    Plugin::CExpComponent(info, parent)
{
    loadLogicForm();

    discoverAllPins();

    relayoutPins();

    /*
    if(nullptr == m_pProtocolWidget)
    {
        m_pProtocolWidget = new CProtocolWidget(this);

        m_pDisplayWidget = m_pProtocolWidget;

        m_pDisplayWidget->hide();
    }
    */
}

CStimulateComponent::~CStimulateComponent()
{    

}

void CStimulateComponent::onRunStatusChanged()
{

}

void CStimulateComponent::onSettingExperiment(Experiment::CExperiment *pInExperiment)
{

}

/*********************************************************
 * \brief       打开协议编辑界面
 *
 * \param[in]
 *
 * \param[out]
 *
 * \return
 * \throws
 * \author	    mxq
 * \date	    2024-11-27
 * \modify
 *
 *********************************************************/
void CStimulateComponent::onOpenEditWidget()
{
    /*
    if(nullptr == m_pDisplayWidget)
    {
        return;
    }

    if(m_pDisplayWidget->isVisible())
    {
        m_pDisplayWidget->hide();
    }
    else
    {
        m_pDisplayWidget->show();
    }
    */

    if (m_pMainWndDelegate != nullptr)
    {
        if (nullptr != m_pStimulateWidget)
        {
            m_pMainWndDelegate->removeTempComponent(this, u8"刺激");

            delete m_pStimulateWidget;
            m_pStimulateWidget = nullptr;
        }

        if (nullptr == m_pStimulateWidget)
        {
            m_pStimulateWidget = new CStimulateEditor(this);
        }

        m_pDisplayWidget = m_pStimulateWidget;
        m_pStimulateWidget->setWindowTitle(u8"刺激");
        m_pMainWndDelegate->addTempComponent(this, u8"刺激", false);
        m_pDisplayWidget->show();
    }
}
