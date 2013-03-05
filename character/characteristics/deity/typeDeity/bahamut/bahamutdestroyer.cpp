#include "character/characteristics/deity/typeDeity/bahamut/bahamutdestroyer.h"
#include "character/characteristics/deity/typeDeity/bahamut/bahamut.h"

BahamutDestroyer::BahamutDestroyer() {
}

BahamutDestroyer::BahamutDestroyer(const BahamutDestroyer &bd) {
}

BahamutDestroyer &BahamutDestroyer::operator =(const BahamutDestroyer &bd) {
    return *this;
}

BahamutDestroyer::~BahamutDestroyer() {
    delete pBahamut;
}

void BahamutDestroyer::initialize(Bahamut *p) {
    pBahamut = p;
}
