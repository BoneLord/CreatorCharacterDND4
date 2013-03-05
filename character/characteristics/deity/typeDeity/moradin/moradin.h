#ifndef MORADIN_H
#define MORADIN_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/moradin/moradindestroyer.h"
#include <cstring>

class Moradin : public IDeity {
    static Moradin * pMoradin;
    static MoradinDestroyer destroyer;
protected:
    Moradin();
    Moradin(const Moradin& b);
    Moradin& operator=(const Moradin& b);
    ~Moradin();
    friend class MoradinDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Moradin& getInstance();
};

#endif // MORADIN_H
