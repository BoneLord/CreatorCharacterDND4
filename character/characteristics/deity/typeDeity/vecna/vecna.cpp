#include "character/characteristics/deity/typeDeity/vecna/vecna.h"

Vecna * Vecna::pVecna = 0;
VecnaDestroyer Vecna::destroyer;

Vecna::Vecna() {
    mAlignment = evil;
}

Vecna::Vecna(const Vecna& b) {
}

Vecna& Vecna::operator=(const Vecna& b) {
    return *this;
}

Vecna::~Vecna() {
}

Vecna& Vecna::getInstance() {
    if (!pVecna) {
        pVecna = new Vecna();
        destroyer.initialize(pVecna);
    }
    return *pVecna;
}

bool Vecna::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == unaligned) {
        return true;
    }
    return false;
}

const char * Vecna::toString() const {
    char name[] = "Vecna";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
