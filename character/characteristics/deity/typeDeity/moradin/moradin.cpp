#include "character/characteristics/deity/typeDeity/moradin/moradin.h"

Moradin * Moradin::pMoradin = 0;
MoradinDestroyer Moradin::destroyer;

Moradin::Moradin() {
    mAlignment = lawfulGood;
}

Moradin::Moradin(const Moradin& b) {
}

Moradin& Moradin::operator=(const Moradin& b) {
    return *this;
}

Moradin::~Moradin() {
}

Moradin& Moradin::getInstance() {
    if (!pMoradin) {
        pMoradin = new Moradin();
        destroyer.initialize(pMoradin);
    }
    return *pMoradin;
}

bool Moradin::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment) {
        return true;
    }
    return false;
}

const char * Moradin::toString() const {
    char name[] = "Moradin";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
