#include "character/characteristics/deity/typeDeity/kord/korddestroyer.h"
#include "character/characteristics/deity/typeDeity/kord/kord.h"

KordDestroyer::KordDestroyer() {
}

KordDestroyer::KordDestroyer(const KordDestroyer &bd) {
}

KordDestroyer &KordDestroyer::operator =(const KordDestroyer &bd) {
    return *this;
}

KordDestroyer::~KordDestroyer() {
    delete pKord;
}

void KordDestroyer::initialize(Kord *p) {
    pKord = p;
}
