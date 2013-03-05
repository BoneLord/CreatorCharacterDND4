#ifndef MELORA_H
#define MELORA_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/melora/meloradestroyer.h"
#include <cstring>

class Melora : public IDeity {
    static Melora * pMelora;
    static MeloraDestroyer destroyer;
protected:
    Melora();
    Melora(const Melora& b);
    Melora& operator=(const Melora& b);
    ~Melora();
    friend class MeloraDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Melora& getInstance();
};

#endif // MELORA_H
