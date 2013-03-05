#include "character/characteristics/deity/typeDeity/ioun/ioun.h"

Ioun * Ioun::pIoun = 0;
IounDestroyer Ioun::destroyer;

Ioun::Ioun() {
    mAlignment = unaligned;
}

Ioun::Ioun(const Ioun& b) {
}

Ioun& Ioun::operator=(const Ioun& b) {
    return *this;
}

Ioun::~Ioun() {
}

Ioun& Ioun::getInstance() {
    if (!pIoun) {
        pIoun = new Ioun();
        destroyer.initialize(pIoun);
    }
    return *pIoun;
}

bool Ioun::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == good || alignment == evil) {
        return true;
    }
    return false;
}

const char * Ioun::toString() const {
    char name[] = "Ioun";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
