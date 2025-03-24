#ifndef CSTIMULATEPLUGIN_H
#define CSTIMULATEPLUGIN_H

#include "Plugin/IPlugin.h"

using namespace Plugin;

QT_BEGIN_NAMESPACE

#define pluginInterface_iid "tme.com.soft.stimulateplugin"

Q_DECLARE_INTERFACE(IPlugin, pluginInterface_iid)

QT_END_NAMESPACE


class CStimulatePlugin:public IPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID pluginInterface_iid FILE "stimulatePlugin.json")
    Q_INTERFACES(IPlugin)

public:
    CStimulatePlugin();

public:
    bool registerComponentInfo();
};

#endif // CPROTOCOLPLUGIN_H
