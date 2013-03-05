#include "character/characteristics/deity/typeDeity/zehir/zehirdestroyer.h"
#include "character/characteristics/deity/typeDeity/zehir/zehir.h"

ZehirDestroyer::ZehirDestroyer() {
}

ZehirDestroyer::ZehirDestroyer(const ZehirDestroyer &bd) {
}

ZehirDestroyer &ZehirDestroyer::operator =(const ZehirDestroyer &bd) {
    return *this;
}

ZehirDestroyer::~ZehirDestroyer() {
    delete pZehir;
}

void ZehirDestroyer::initialize(Zehir *p) {
    pZehir = p;
}
