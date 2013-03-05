#ifndef ZEHIR_H
#define ZEHIR_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/zehir/zehirdestroyer.h"
#include <cstring>

class Zehir : public IDeity {
    static Zehir * pZehir;
    static ZehirDestroyer destroyer;
protected:
    Zehir();
    Zehir(const Zehir& b);
    Zehir& operator=(const Zehir& b);
    ~Zehir();
    friend class ZehirDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Zehir& getInstance();
};

#endif // ZEHIR_H
