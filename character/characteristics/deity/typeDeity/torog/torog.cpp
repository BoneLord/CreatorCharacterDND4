#include "character/characteristics/deity/typeDeity/torog/torog.h"

Torog * Torog::pTorog = 0;
TorogDestroyer Torog::destroyer;

Torog::Torog() {
    mAlignment = evil;
}

Torog::Torog(const Torog& b) {
}

Torog& Torog::operator=(const Torog& b) {
    return *this;
}

Torog::~Torog() {
}

Torog& Torog::getInstance() {
    if (!pTorog) {
        pTorog = new Torog();
        destroyer.initialize(pTorog);
    }
    return *pTorog;
}

bool Torog::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == unaligned) {
        return true;
    }
    return false;
}

const char * Torog::toString() const {
    char name[] = "Torog";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
