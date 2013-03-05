#ifndef ERATHIS_H
#define ERATHIS_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/erathis/erathisdestroyer.h"
#include <cstring>

class Erathis : public IDeity {
    static Erathis * pErathis;
    static ErathisDestroyer destroyer;
protected:
    Erathis();
    Erathis(const Erathis& b);
    Erathis& operator=(const Erathis& b);
    ~Erathis();
    friend class ErathisDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Erathis& getInstance();
};

#endif // ERATHIS_H
