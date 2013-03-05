#include "character/characteristics/deity/typeDeity/tiamat/tiamat.h"

Tiamat * Tiamat::pTiamat = 0;
TiamatDestroyer Tiamat::destroyer;

Tiamat::Tiamat() {
    mAlignment = evil;
}

Tiamat::Tiamat(const Tiamat& b) {
}

Tiamat& Tiamat::operator=(const Tiamat& b) {
    return *this;
}

Tiamat::~Tiamat() {
}

Tiamat& Tiamat::getInstance() {
    if (!pTiamat) {
        pTiamat = new Tiamat();
        destroyer.initialize(pTiamat);
    }
    return *pTiamat;
}

bool Tiamat::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == unaligned) {
        return true;
    }
    return false;
}

const char * Tiamat::toString() const {
    char name[] = "Tiamat";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
