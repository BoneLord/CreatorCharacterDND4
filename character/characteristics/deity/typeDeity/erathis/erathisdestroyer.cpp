#include "character/characteristics/deity/typeDeity/erathis/erathisdestroyer.h"
#include "character/characteristics/deity/typeDeity/erathis/erathis.h"

ErathisDestroyer::ErathisDestroyer() {
}

ErathisDestroyer::ErathisDestroyer(const ErathisDestroyer &bd) {
}

ErathisDestroyer &ErathisDestroyer::operator =(const ErathisDestroyer &bd) {
    return *this;
}

ErathisDestroyer::~ErathisDestroyer() {
    delete pErathis;
}

void ErathisDestroyer::initialize(Erathis *p) {
    pErathis = p;
}
