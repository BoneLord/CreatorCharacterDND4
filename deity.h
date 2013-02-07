#ifndef DEITY_H
#define DEITY_H

#include "deitytype.h"
#include "alignment.h"

class Deity {
    DeityType deityType;
    Alignment alignment;
public:
    Deity(DeityType _deityType);
    ~Deity();
    DeityType getDeityType() const;
    Alignment getDeityAlignment() const;
};

#endif // DEITY_H
