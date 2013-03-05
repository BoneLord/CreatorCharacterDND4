#ifndef BANE_H
#define BANE_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/bane/banedestroyer.h"
#include <cstring>

class Bane : public IDeity {
    static Bane * pBane;
    static BaneDestroyer destroyer;
protected:
    Bane();
    Bane(const Bane& b);
    Bane& operator=(const Bane& b);
    ~Bane();
    friend class BaneDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Bane& getInstance();
};


#endif // BANE_H
