#ifndef IOUN_H
#define IOUN_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/ioun/ioundestroyer.h"
#include <cstring>

class Ioun : public IDeity {
    static Ioun * pIoun;
    static IounDestroyer destroyer;
protected:
    Ioun();
    Ioun(const Ioun& b);
    Ioun& operator=(const Ioun& b);
    ~Ioun();
    friend class IounDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Ioun& getInstance();
};

#endif // IOUN_H
