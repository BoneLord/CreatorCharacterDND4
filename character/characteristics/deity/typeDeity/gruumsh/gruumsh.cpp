#include "character/characteristics/deity/typeDeity/gruumsh/gruumsh.h"

Gruumsh * Gruumsh::pGruumsh = 0;
GruumshDestroyer Gruumsh::destroyer;

Gruumsh::Gruumsh() {
    mAlignment = chaoticEvil;
}

Gruumsh::Gruumsh(const Gruumsh& b) {
}

Gruumsh& Gruumsh::operator=(const Gruumsh& b) {
    return *this;
}

Gruumsh::~Gruumsh() {
}

Gruumsh& Gruumsh::getInstance() {
    if (!pGruumsh) {
        pGruumsh = new Gruumsh();
        destroyer.initialize(pGruumsh);
    }
    return *pGruumsh;
}

bool Gruumsh::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment) {
        return true;
    }
    return false;
}

const char * Gruumsh::toString() const {
    char name[] = "Gruumsh";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
