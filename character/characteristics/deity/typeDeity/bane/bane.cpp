#include "character/characteristics/deity/typeDeity/bane/bane.h"

Bane * Bane::pBane = 0;
BaneDestroyer Bane::destroyer;

Bane::Bane() {
    mAlignment = evil;
}

Bane::Bane(const Bane& b) {
}

Bane& Bane::operator=(const Bane& b) {
    return *this;
}

Bane::~Bane() {
}

Bane& Bane::getInstance() {
    if (!pBane) {
        pBane = new Bane();
        destroyer.initialize(pBane);
    }
    return *pBane;
}

bool Bane::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == unaligned) {
        return true;
    }
    return false;
}

const char * Bane::toString() const {
    char name[] = "Bane";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
