#include "character/characteristics/deity/typeDeity/ioun/ioundestroyer.h"
#include "character/characteristics/deity/typeDeity/ioun/ioun.h"

IounDestroyer::IounDestroyer() {
}

IounDestroyer::IounDestroyer(const IounDestroyer &bd) {
}

IounDestroyer &IounDestroyer::operator =(const IounDestroyer &bd) {
    return *this;
}

IounDestroyer::~IounDestroyer() {
    delete pIoun;
}

void IounDestroyer::initialize(Ioun *p) {
    pIoun = p;
}
