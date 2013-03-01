#include "character/characteristics/bonus/bonus.h"

Bonus::Bonus(int val) :
    value(val) {
}

Bonus::~Bonus() {
}

int Bonus::getValBonus() const {
    return value;
}
