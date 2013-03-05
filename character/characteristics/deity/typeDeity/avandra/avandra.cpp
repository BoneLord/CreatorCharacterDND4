#include "character/characteristics/deity/typeDeity/avandra/avandra.h"

Avandra * Avandra::pAvandra = 0;
AvandraDestroyer Avandra::destroyer;

Avandra::Avandra() {
    mAlignment = good;
}

Avandra::Avandra(const Avandra& b) {
}

Avandra& Avandra::operator=(const Avandra& b) {
    return *this;
}

Avandra::~Avandra() {
}

Avandra& Avandra::getInstance() {
    if (!pAvandra) {
        pAvandra = new Avandra();
        destroyer.initialize(pAvandra);
    }
    return *pAvandra;
}

bool Avandra::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == unaligned) {
        return true;
    }
    return false;
}

const char * Avandra::toString() const {
    char name[] = "Avandra";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
