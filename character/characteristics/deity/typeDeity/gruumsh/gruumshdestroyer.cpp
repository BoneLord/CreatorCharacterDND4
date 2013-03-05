#include "character/characteristics/deity/typeDeity/gruumsh/gruumshdestroyer.h"
#include "character/characteristics/deity/typeDeity/gruumsh/gruumsh.h"

GruumshDestroyer::GruumshDestroyer() {
}

GruumshDestroyer::GruumshDestroyer(const GruumshDestroyer &bd) {
}

GruumshDestroyer &GruumshDestroyer::operator =(const GruumshDestroyer &bd) {
    return *this;
}

GruumshDestroyer::~GruumshDestroyer() {
    delete pGruumsh;
}

void GruumshDestroyer::initialize(Gruumsh *p) {
    pGruumsh = p;
}
