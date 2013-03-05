#ifndef BAHAMUT_H
#define BAHAMUT_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/bahamut/bahamutdestroyer.h"
#include <cstring>

class Bahamut : public IDeity {
    static Bahamut * pBahamut;
    static BahamutDestroyer destroyer;
protected:
    Bahamut();
    Bahamut(const Bahamut& b);
    Bahamut& operator=(const Bahamut& b);
    ~Bahamut();
    friend class BahamutDestroyer;
public:    
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Bahamut& getInstance();
};

#endif // BAHAMUT_H
