#ifndef TOROG_H
#define TOROG_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/torog/torogdestroyer.h"
#include <cstring>

class Torog : public IDeity {
    static Torog * pTorog;
    static TorogDestroyer destroyer;
protected:
    Torog();
    Torog(const Torog& b);
    Torog& operator=(const Torog& b);
    ~Torog();
    friend class TorogDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Torog& getInstance();
};

#endif // TOROG_H
