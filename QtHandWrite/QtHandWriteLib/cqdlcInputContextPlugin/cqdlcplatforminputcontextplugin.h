#ifndef CQDLCPLATFORMINPUTCONTEXTPLUGIN_H
#define CQDLCPLATFORMINPUTCONTEXTPLUGIN_H

#include <qpa/qplatforminputcontextplugin_p.h>
#include "cqdlcplatforminputcontext.h"

class CqdlcPlatformInputContextPlugin : public QPlatformInputContextPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA(IID QPlatformInputContextFactoryInterface_iid FILE "./res/cqdlc.json")

public:
    CqdlcPlatformInputContext *create(const QString &key, const QStringList &paramlist);
};

#endif // CQDLCPLATFORMINPUTCONTEXTPLUGIN_H
