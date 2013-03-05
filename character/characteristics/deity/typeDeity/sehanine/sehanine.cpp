#include "character/characteristics/deity/typeDeity/sehanine/sehanine.h"

Sehanine * Sehanine::pSehanine = 0;
SehanineDestroyer Sehanine::destroyer;

Sehanine::Sehanine() {
    mAlignment = unaligned;
}

Sehanine::Sehanine(const Sehanine& b) {
}

Sehanine& Sehanine::operator=(const Sehanine& b) {
    return *this;
}

Sehanine::~Sehanine() {
}

Sehanine& Sehanine::getInstance() {
    if (!pSehanine) {
        pSehanine = new Sehanine();
        destroyer.initialize(pSehanine);
    }
    return *pSehanine;
}

bool Sehanine::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == good || alignment == evil) {
        return true;
    }
    return false;
}

const char * Sehanine::toString() const {
    char name[] = "Sehanine";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
