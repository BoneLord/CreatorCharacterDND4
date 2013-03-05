#ifndef VECNA_H
#define VECNA_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/vecna/vecnadestroyer.h"
#include <cstring>

class Vecna : public IDeity {
    static Vecna * pVecna;
    static VecnaDestroyer destroyer;
protected:
    Vecna();
    Vecna(const Vecna& b);
    Vecna& operator=(const Vecna& b);
    ~Vecna();
    friend class VecnaDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Vecna& getInstance();
};

#endif // VECNA_H
