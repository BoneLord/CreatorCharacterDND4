#ifndef SEHANINE_H
#define SEHANINE_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/sehanine/sehaninedestroyer.h"
#include <cstring>

class Sehanine : public IDeity {
    static Sehanine * pSehanine;
    static SehanineDestroyer destroyer;
protected:
    Sehanine();
    Sehanine(const Sehanine& b);
    Sehanine& operator=(const Sehanine& b);
    ~Sehanine();
    friend class SehanineDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Sehanine& getInstance();
};

#endif // SEHANINE_H
