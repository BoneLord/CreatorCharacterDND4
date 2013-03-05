#ifndef TIAMAT_H
#define TIAMAT_H

#include "character/characteristics/deity/ideity.h"
#include "character/characteristics/alignment.h"
#include "character/characteristics/deity/typeDeity/tiamat/tiamatdestroyer.h"
#include <cstring>

class Tiamat : public IDeity {
    static Tiamat * pTiamat;
    static TiamatDestroyer destroyer;
protected:
    Tiamat();
    Tiamat(const Tiamat& b);
    Tiamat& operator=(const Tiamat& b);
    ~Tiamat();
    friend class TiamatDestroyer;
public:
    bool isCompatibleAlignment(Alignment alignment) const;
    const char * toString() const;
    static Tiamat& getInstance();
};

#endif // TIAMAT_H
