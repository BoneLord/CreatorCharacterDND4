#include "character/characteristics/deity/ideity.h"

IDeity::IDeity() {
}

IDeity::~IDeity() {
}

IDeity::IDeity(const IDeity &b) {
}

IDeity &IDeity::operator =(const IDeity &b) {
    return *this;
}

Alignment IDeity::getAlignment() const {
    return mAlignment;
}
