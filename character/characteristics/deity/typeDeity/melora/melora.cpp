#include "character/characteristics/deity/typeDeity/melora/melora.h"

Melora * Melora::pMelora = 0;
MeloraDestroyer Melora::destroyer;

Melora::Melora() {
    mAlignment = unaligned;
}

Melora::Melora(const Melora& b) {
}

Melora& Melora::operator=(const Melora& b) {
    return *this;
}

Melora::~Melora() {
}

Melora& Melora::getInstance() {
    if (!pMelora) {
        pMelora = new Melora();
        destroyer.initialize(pMelora);
    }
    return *pMelora;
}

bool Melora::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == good || alignment == evil) {
        return true;
    }
    return false;
}

const char * Melora::toString() const {
    char name[] = "Melora";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
