#include "character/characteristics/deity/typeDeity/lolth/lolth.h"

Lolth * Lolth::pLolth = 0;
LolthDestroyer Lolth::destroyer;

Lolth::Lolth() {
    mAlignment = chaoticEvil;
}

Lolth::Lolth(const Lolth& b) {
}

Lolth& Lolth::operator=(const Lolth& b) {
    return *this;
}

Lolth::~Lolth() {
}

Lolth& Lolth::getInstance() {
    if (!pLolth) {
        pLolth = new Lolth();
        destroyer.initialize(pLolth);
    }
    return *pLolth;
}

bool Lolth::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment) {
        return true;
    }
    return false;
}

const char * Lolth::toString() const {
    char name[] = "Lolth";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
