#ifndef MASTERCONTROLLER_H
#define MASTERCONTROLLER_H

#include <QObject>

#include <cm_one-lib_global.h>

namespace cm_one {
namespace controllers {

class CM_ONELIBSHARED_EXPORT MasterController : public QObject
{
    Q_OBJECT

public:

    explicit MasterController(QObject* parent = nullptr);
};

}}

#endif // MASTERCONTROLLER_H
