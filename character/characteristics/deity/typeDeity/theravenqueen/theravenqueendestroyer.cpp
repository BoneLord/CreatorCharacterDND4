#include "character/characteristics/deity/typeDeity/theravenqueen/theravenqueendestroyer.h"
#include "character/characteristics/deity/typeDeity/theravenqueen/theravenqueen.h"

TheRavenQueenDestroyer::TheRavenQueenDestroyer() {
}

TheRavenQueenDestroyer::TheRavenQueenDestroyer(const TheRavenQueenDestroyer &bd) {
}

TheRavenQueenDestroyer &TheRavenQueenDestroyer::operator =(const TheRavenQueenDestroyer &bd) {
    return *this;
}

TheRavenQueenDestroyer::~TheRavenQueenDestroyer() {
    delete pTheRavenQueen;
}

void TheRavenQueenDestroyer::initialize(TheRavenQueen *p) {
    pTheRavenQueen = p;
}
