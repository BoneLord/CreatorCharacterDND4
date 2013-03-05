#include "character/characteristics/deity/typeDeity/zehir/zehir.h"

Zehir * Zehir::pZehir = 0;
ZehirDestroyer Zehir::destroyer;

Zehir::Zehir() {
    mAlignment = evil;
}

Zehir::Zehir(const Zehir& b) {
}

Zehir& Zehir::operator=(const Zehir& b) {
    return *this;
}

Zehir::~Zehir() {
}

Zehir& Zehir::getInstance() {
    if (!pZehir) {
        pZehir = new Zehir();
        destroyer.initialize(pZehir);
    }
    return *pZehir;
}

bool Zehir::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == unaligned) {
        return true;
    }
    return false;
}

const char * Zehir::toString() const {
    char name[] = "Zehir";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
