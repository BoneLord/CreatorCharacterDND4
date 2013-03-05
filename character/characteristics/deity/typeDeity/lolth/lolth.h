#ifndef LOLTH_H
#define LOLTH_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/lolth/lolthdestroyer.h"
#include <cstring>

class Lolth : public IDeity {
    static Lolth * pLolth;
    static LolthDestroyer destroyer;
protected:
    Lolth();
    Lolth(const Lolth& b);
    Lolth& operator=(const Lolth& b);
    ~Lolth();
    friend class LolthDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Lolth& getInstance();
};
#endif // LOLTH_H
