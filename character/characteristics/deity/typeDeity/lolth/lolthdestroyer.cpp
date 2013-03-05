#include "character/characteristics/deity/typeDeity/lolth/lolthdestroyer.h"
#include "character/characteristics/deity/typeDeity/lolth/lolth.h"

LolthDestroyer::LolthDestroyer() {
}

LolthDestroyer::LolthDestroyer(const LolthDestroyer &bd) {
}

LolthDestroyer &LolthDestroyer::operator =(const LolthDestroyer &bd) {
    return *this;
}

LolthDestroyer::~LolthDestroyer() {
    delete pLolth;
}

void LolthDestroyer::initialize(Lolth *p) {
    pLolth = p;
}
