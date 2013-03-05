#include "character/characteristics/deity/typeDeity/vecna/vecnadestroyer.h"
#include "character/characteristics/deity/typeDeity/vecna/vecna.h"

VecnaDestroyer::VecnaDestroyer() {
}

VecnaDestroyer::VecnaDestroyer(const VecnaDestroyer &bd) {
}

VecnaDestroyer &VecnaDestroyer::operator =(const VecnaDestroyer &bd) {
    return *this;
}

VecnaDestroyer::~VecnaDestroyer() {
    delete pVecna;
}

void VecnaDestroyer::initialize(Vecna *p) {
    pVecna = p;
}
