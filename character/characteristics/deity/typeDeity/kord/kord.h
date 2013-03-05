#ifndef KORD_H
#define KORD_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/kord/korddestroyer.h"
#include <cstring>

class Kord : public IDeity {
    static Kord * pKord;
    static KordDestroyer destroyer;
protected:
    Kord();
    Kord(const Kord& b);
    Kord& operator=(const Kord& b);
    ~Kord();
    friend class KordDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Kord& getInstance();
};

#endif // KORD_H
