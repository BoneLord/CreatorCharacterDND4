#include "character/characteristics/deity/typeDeity/pelor/pelor.h"

Pelor * Pelor::pPelor = 0;
PelorDestroyer Pelor::destroyer;

Pelor::Pelor() {
    mAlignment = good;
}

Pelor::Pelor(const Pelor& b) {
}

Pelor& Pelor::operator=(const Pelor& b) {
    return *this;
}

Pelor::~Pelor() {
}

Pelor& Pelor::getInstance() {
    if (!pPelor) {
        pPelor = new Pelor();
        destroyer.initialize(pPelor);
    }
    return *pPelor;
}

bool Pelor::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == unaligned) {
        return true;
    }
    return false;
}

const char * Pelor::toString() const {
    char name[] = "Pelor";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
