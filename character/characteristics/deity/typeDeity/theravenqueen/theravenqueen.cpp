#include "character/characteristics/deity/typeDeity/theravenqueen/theravenqueen.h"

TheRavenQueen * TheRavenQueen::pTheRavenQueen = 0;
TheRavenQueenDestroyer TheRavenQueen::destroyer;

TheRavenQueen::TheRavenQueen() {
    mAlignment = unaligned;
}

TheRavenQueen::TheRavenQueen(const TheRavenQueen& b) {
}

TheRavenQueen& TheRavenQueen::operator=(const TheRavenQueen& b) {
    return *this;
}

TheRavenQueen::~TheRavenQueen() {
}

TheRavenQueen& TheRavenQueen::getInstance() {
    if (!pTheRavenQueen) {
        pTheRavenQueen = new TheRavenQueen();
        destroyer.initialize(pTheRavenQueen);
    }
    return *pTheRavenQueen;
}

bool TheRavenQueen::isCompatibleAlignment(Alignment alignment) const {
    if (mAlignment == alignment || alignment == good || alignment == evil) {
        return true;
    }
    return false;
}

const char * TheRavenQueen::toString() const {
    char name[] = "The Raven Queen";
    char *pName = new char[strlen(name) + 1];
    strcpy(pName, name);
    return pName;
}
