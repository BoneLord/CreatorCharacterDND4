#include "character/characteristics/deity/typeDeity/erathis/erathis.h"

Erathis * Erathis::pErathis = 0;
ErathisDestroyer Erathis::destroyer;

Erathis::Erathis() {
    mAlignment = unaligned;
}

Erathis::Erathis(const Erathis& b) {
}

Erathis& Erathis::operator=(const Erathis& b) {
    return *this;
}

Erathis::~Erathis() {
}

Erathis& Erathis::getInstance() {
    if (!pErathis) {
        pErathis = new Erathis();
        destroyer.initialize(pErathis);
    }
    return *pErathis;
}

bool Erathis::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == good || alignment == evil) {
        return true;
    }
    return false;
}

const char * Erathis::toString() const {
    char name[] = "Erathis";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
