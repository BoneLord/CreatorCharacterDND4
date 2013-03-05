#ifndef CORELLON_H
#define CORELLON_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/corellon/corellondestroyer.h"
#include <cstring>

class Corellon : public IDeity {
    static Corellon * pCorellon;
    static CorellonDestroyer destroyer;
protected:
    Corellon();
    Corellon(const Corellon& b);
    Corellon& operator=(const Corellon& b);
    ~Corellon();
    friend class CorellonDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Corellon& getInstance();
};

#endif // CORELLON_H
