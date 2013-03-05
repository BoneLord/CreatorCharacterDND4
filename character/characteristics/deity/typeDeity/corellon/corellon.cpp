#include "character/characteristics/deity/typeDeity/corellon/corellon.h"

Corellon * Corellon::pCorellon = 0;
CorellonDestroyer Corellon::destroyer;

Corellon::Corellon() {
    mAlignment = unaligned;
}

Corellon::Corellon(const Corellon& b) {
}

Corellon& Corellon::operator=(const Corellon& b) {
    return *this;
}

Corellon::~Corellon() {
}

Corellon& Corellon::getInstance() {
    if (!pCorellon) {
        pCorellon = new Corellon();
        destroyer.initialize(pCorellon);
    }
    return *pCorellon;
}

bool Corellon::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == good || alignment == evil) {
        return true;
    }
    return false;
}

const char * Corellon::toString() const {
    char name[] = "Corellon";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
