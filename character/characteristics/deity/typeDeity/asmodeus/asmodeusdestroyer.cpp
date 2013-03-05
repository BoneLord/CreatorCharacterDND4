#include "character/characteristics/deity/typeDeity/asmodeus/asmodeusdestroyer.h"
#include "character/characteristics/deity/typeDeity/asmodeus/asmodeus.h"

AsmodeusDestroyer::AsmodeusDestroyer() {
}

AsmodeusDestroyer::AsmodeusDestroyer(const AsmodeusDestroyer &bd) {
}

AsmodeusDestroyer &AsmodeusDestroyer::operator =(const AsmodeusDestroyer &bd) {
    return *this;
}

AsmodeusDestroyer::~AsmodeusDestroyer() {
    delete pAsmodeus;
}

void AsmodeusDestroyer::initialize(Asmodeus *p) {
    pAsmodeus = p;
}
