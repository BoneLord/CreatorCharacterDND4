#include "character/characteristics/deity/typeDeity/kord/kord.h"

Kord * Kord::pKord = 0;
KordDestroyer Kord::destroyer;

Kord::Kord() {
    mAlignment = unaligned;
}

Kord::Kord(const Kord& b) {
}

Kord& Kord::operator=(const Kord& b) {
    return *this;
}

Kord::~Kord() {
}

Kord& Kord::getInstance() {
    if (!pKord) {
        pKord = new Kord();
        destroyer.initialize(pKord);
    }
    return *pKord;
}

bool Kord::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == good || alignment == evil) {
        return true;
    }
    return false;
}

const char * Kord::toString() const {
    char name[] = "Kord";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
