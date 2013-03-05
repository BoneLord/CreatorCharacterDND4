#ifndef GRUUMSH_H
#define GRUUMSH_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/gruumsh/gruumshdestroyer.h"
#include <cstring>

class Gruumsh : public IDeity {
    static Gruumsh * pGruumsh;
    static GruumshDestroyer destroyer;
protected:
    Gruumsh();
    Gruumsh(const Gruumsh& b);
    Gruumsh& operator=(const Gruumsh& b);
    ~Gruumsh();
    friend class GruumshDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Gruumsh& getInstance();
};

#endif // GRUUMSH_H
