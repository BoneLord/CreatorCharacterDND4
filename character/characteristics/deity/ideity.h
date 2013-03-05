#ifndef IDEITY_H
#define IDEITY_H

#include "character/characteristics/alignment.h"

class IDeity {
    IDeity(const IDeity& b);
    IDeity& operator=(const IDeity& b);
protected:
    Alignment mAlignment;
public:
    IDeity();
    virtual ~IDeity();
    Alignment getAlignment() const;
    virtual bool isCompatibleAlignment(Alignment alignment) const = 0;
    virtual const char * toString() const = 0;
};

#endif // IDEITY_H
