#ifndef HALFLING_H
#define HALFLING_H

#include "character/characteristics/race/race.h"
#include "character/characteristics/race/characteristics/size.h"
#include "character/characteristics/race/characteristics/vision.h"
#include "character/characteristics/race/racetype.h"
#include "character/characteristics/language.h"
#include "character/characteristics/bonus/bonus.h"

class Halfling : public Race {
public:
    Halfling(Language language);
    ~Halfling();
};

#endif // HALFLING_H
