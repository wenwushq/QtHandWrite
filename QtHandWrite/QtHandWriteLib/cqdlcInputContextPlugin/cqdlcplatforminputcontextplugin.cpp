#include "cqdlcplatforminputcontextplugin.h"

CqdlcPlatformInputContext * CqdlcPlatformInputContextPlugin::create(const QString &key, const QStringList &paramlist)
{
    Q_UNUSED(paramlist);

    if(key.compare("cqdlc",Qt::CaseInsensitive) == 0)
    {
        return new CqdlcPlatformInputContext;
    }
    else
    {
        return nullptr;
    }
}
