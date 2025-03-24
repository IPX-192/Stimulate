#include "CStimulatePlugin.h"
#include "Plugin/CComponentBuilder.h"
#include "CStimulateComponent.h""
#include "CStimulateEditComponent.h"

#pragma execution_character_set("utf-8")
CStimulatePlugin::CStimulatePlugin()
{
    registerComponentInfo();
}

bool CStimulatePlugin::registerComponentInfo()
{
    bool bSuccess = true;

    bSuccess &= CComponentBuilder::registerClass<CStimulateComponent>("XXX.png", CComponentInfo::Category::Wnd, tr(u8"刺激"));

    bSuccess &= CComponentBuilder::registerClass<CStimulateEditComponent>("XXX.png", CComponentInfo::Category::Wnd, tr(u8"刺激编辑"));

    return bSuccess;
}
