#ifndef DRAGONBORN_H
#define DRAGONBORN_H

#include "character/characteristics/race/race.h"
#include "character/characteristics/race/characteristics/size.h"
#include "character/characteristics/race/characteristics/vision.h"
#include "character/characteristics/race/racetype.h"
#include "character/characteristics/language.h"
#include "character/characteristics/bonus/bonus.h"

class Dragonborn : public Race {
public:
    Dragonborn();
    ~Dragonborn();
};

#endif // DRAGONBORN_H
