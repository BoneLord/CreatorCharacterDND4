#include "character/characteristics/deity/typeDeity/sehanine/sehaninedestroyer.h"
#include "character/characteristics/deity/typeDeity/sehanine/sehanine.h"

SehanineDestroyer::SehanineDestroyer() {
}

SehanineDestroyer::SehanineDestroyer(const SehanineDestroyer &bd) {
}

SehanineDestroyer &SehanineDestroyer::operator =(const SehanineDestroyer &bd) {
    return *this;
}

SehanineDestroyer::~SehanineDestroyer() {
    delete pSehanine;
}

void SehanineDestroyer::initialize(Sehanine *p) {
    pSehanine = p;
}
