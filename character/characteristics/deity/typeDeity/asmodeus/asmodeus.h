#ifndef ASMODEUS_H
#define ASMODEUS_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/asmodeus/asmodeusdestroyer.h"
#include <cstring>

class Asmodeus : public IDeity {
    static Asmodeus * pAsmodeus;
    static AsmodeusDestroyer destroyer;
protected:
    Asmodeus();
    Asmodeus(const Asmodeus& b);
    Asmodeus& operator=(const Asmodeus& b);
    ~Asmodeus();
    friend class AsmodeusDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Asmodeus& getInstance();
};

#endif // ASMODEUS_H
