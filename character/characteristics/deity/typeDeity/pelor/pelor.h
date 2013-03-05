#ifndef PELOR_H
#define PELOR_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/pelor/pelordestroyer.h"
#include <cstring>

class Pelor : public IDeity {
    static Pelor * pPelor;
    static PelorDestroyer destroyer;
protected:
    Pelor();
    Pelor(const Pelor& b);
    Pelor& operator=(const Pelor& b);
    ~Pelor();
    friend class PelorDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Pelor& getInstance();
};

#endif // PELOR_H
