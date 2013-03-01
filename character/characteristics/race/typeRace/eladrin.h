#ifndef ELADRIN_H
#define ELADRIN_H

#include "character/characteristics/race/race.h"
#include "character/characteristics/race/characteristics/size.h"
#include "character/characteristics/race/characteristics/vision.h"
#include "character/characteristics/race/racetype.h"
#include "character/characteristics/language.h"
#include "character/characteristics/bonus/typeBonus/bonusability.h"
#include "character/characteristics/bonus/typeBonus/bonusskill.h"
#include "character/characteristics/bonus/typeBonus/bonusdefense.h"
#include "character/characteristics/feat/feattype.h"

class Eladrin : public Race {
public:
    Eladrin();
    ~Eladrin();
};

#endif // ELADRIN_H
