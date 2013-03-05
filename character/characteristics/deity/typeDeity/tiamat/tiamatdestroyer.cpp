#include "character/characteristics/deity/typeDeity/tiamat/tiamatdestroyer.h"
#include "character/characteristics/deity/typeDeity/tiamat/tiamat.h"

TiamatDestroyer::TiamatDestroyer() {
}

TiamatDestroyer::TiamatDestroyer(const TiamatDestroyer &bd) {
}

TiamatDestroyer &TiamatDestroyer::operator =(const TiamatDestroyer &bd) {
    return *this;
}

TiamatDestroyer::~TiamatDestroyer() {
    delete pTiamat;
}

void TiamatDestroyer::initialize(Tiamat *p) {
    pTiamat = p;
}
