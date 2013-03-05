#include "character/characteristics/deity/typeDeity/moradin/moradindestroyer.h"
#include "character/characteristics/deity/typeDeity/moradin/moradin.h"

MoradinDestroyer::MoradinDestroyer() {
}

MoradinDestroyer::MoradinDestroyer(const MoradinDestroyer &bd) {
}

MoradinDestroyer &MoradinDestroyer::operator =(const MoradinDestroyer &bd) {
    return *this;
}

MoradinDestroyer::~MoradinDestroyer() {
    delete pMoradin;
}

void MoradinDestroyer::initialize(Moradin *p) {
    pMoradin = p;
}
