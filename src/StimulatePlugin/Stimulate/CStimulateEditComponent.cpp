#include <QDebug>
#include "CStimulateEditComponent.h"
#include "IMainWndDelegate.h"
#include <QApplication>
#include <QScreen>

using namespace Plugin;

CStimulateEditComponent::CStimulateEditComponent(Plugin::CComponentInfo &info, QWidget *parent):
    Plugin::CExpComponent(info, parent)
{
    loadLogicForm();

    discoverAllPins();

    relayoutPins();
}

CStimulateEditComponent::~CStimulateEditComponent()
{

}

void CStimulateEditComponent::onRunStatusChanged()
{

}

void CStimulateEditComponent::onSettingExperiment(Experiment::CExperiment *pInExperiment)
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
void CStimulateEditComponent::onOpenEditWidget()
{
    if (nullptr != m_pNewStimulateEdit)
    {
        delete m_pNewStimulateEdit;
        m_pNewStimulateEdit = nullptr;
    }

    if (nullptr == m_pNewStimulateEdit)
    {
        m_pNewStimulateEdit = new CStimulateEditor();
        m_pNewStimulateEdit->resize(778,446);

        QScreen *screen = QApplication::primaryScreen();
        QRect screenGeometry = screen->availableGeometry();
        int x = (screenGeometry.width() - m_pNewStimulateEdit->width()) / 2;
        int y = (screenGeometry.height() - m_pNewStimulateEdit->height()) / 2;
        m_pNewStimulateEdit->move(x, y);
    }

    m_pNewStimulateEdit->setWindowTitle(u8"刺激编辑");
    m_pNewStimulateEdit->show();
}
