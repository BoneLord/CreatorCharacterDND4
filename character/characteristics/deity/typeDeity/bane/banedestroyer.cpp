#include "character/characteristics/deity/typeDeity/bane/banedestroyer.h"
#include "character/characteristics/deity/typeDeity/bane/bane.h"

BaneDestroyer::BaneDestroyer() {
}

BaneDestroyer::BaneDestroyer(const BaneDestroyer &bd) {
}

BaneDestroyer &BaneDestroyer::operator =(const BaneDestroyer &bd) {
    return *this;
}

BaneDestroyer::~BaneDestroyer() {
    delete pBane;
}

void BaneDestroyer::initialize(Bane *p) {
    pBane = p;
}
