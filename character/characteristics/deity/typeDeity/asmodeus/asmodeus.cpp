#include "character/characteristics/deity/typeDeity/asmodeus/asmodeus.h"

Asmodeus * Asmodeus::pAsmodeus = 0;
AsmodeusDestroyer Asmodeus::destroyer;

Asmodeus::Asmodeus() {
    mAlignment = evil;
}

Asmodeus::Asmodeus(const Asmodeus& b) {
}

Asmodeus& Asmodeus::operator=(const Asmodeus& b) {
    return *this;
}

Asmodeus::~Asmodeus() {
}

Asmodeus& Asmodeus::getInstance() {
    if (!pAsmodeus) {
        pAsmodeus = new Asmodeus();
        destroyer.initialize(pAsmodeus);
    }
    return *pAsmodeus;
}

bool Asmodeus::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == unaligned) {
        return true;
    }
    return false;
}

const char * Asmodeus::toString() const {
    char name[] = "Asmodeus";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
