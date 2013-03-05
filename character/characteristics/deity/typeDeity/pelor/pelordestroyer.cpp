#include "character/characteristics/deity/typeDeity/pelor/pelordestroyer.h"
#include "character/characteristics/deity/typeDeity/pelor/pelor.h"

PelorDestroyer::PelorDestroyer() {
}

PelorDestroyer::PelorDestroyer(const PelorDestroyer &bd) {
}

PelorDestroyer &PelorDestroyer::operator =(const PelorDestroyer &bd) {
    return *this;
}

PelorDestroyer::~PelorDestroyer() {
    delete pPelor;
}

void PelorDestroyer::initialize(Pelor *p) {
    pPelor = p;
}
