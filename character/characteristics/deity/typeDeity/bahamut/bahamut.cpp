#include "character/characteristics/deity/typeDeity/bahamut/bahamut.h"

Bahamut * Bahamut::pBahamut = 0;
BahamutDestroyer Bahamut::destroyer;

Bahamut::Bahamut() {
    mAlignment = lawfulGood;
}

Bahamut::Bahamut(const Bahamut& b) {
}

Bahamut& Bahamut::operator=(const Bahamut& b) {
    return *this;
}

Bahamut::~Bahamut() {
}

Bahamut& Bahamut::getInstance() {
    if (!pBahamut) {
        pBahamut = new Bahamut();
        destroyer.initialize(pBahamut);
    }
    return *pBahamut;
}

bool Bahamut::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment) {
        return true;
    }
    return false;
}

const char * Bahamut::toString() const {
    char name[] = "Bahamut";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
