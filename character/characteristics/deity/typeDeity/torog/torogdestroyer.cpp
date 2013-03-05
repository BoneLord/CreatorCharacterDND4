#include "character/characteristics/deity/typeDeity/torog/torogdestroyer.h"
#include "character/characteristics/deity/typeDeity/torog/torog.h"

TorogDestroyer::TorogDestroyer() {
}

TorogDestroyer::TorogDestroyer(const TorogDestroyer &bd) {
}

TorogDestroyer &TorogDestroyer::operator =(const TorogDestroyer &bd) {
    return *this;
}

TorogDestroyer::~TorogDestroyer() {
    delete pTorog;
}

void TorogDestroyer::initialize(Torog *p) {
    pTorog = p;
}
