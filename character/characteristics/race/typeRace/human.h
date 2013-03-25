#ifndef HUMAN_H
#define HUMAN_H

#include <cstring>
#include "character/characteristics/race/race.h"
#include "character/characteristics/race/characteristics/size.h"
#include "character/characteristics/race/characteristics/vision.h"
#include "character/characteristics/language.h"
#include "character/characteristics/bonus/bonus.h"

class Human : public Race {
public:
    Human(Language language, AbilityType ability);
    ~Human();
    const char * toString() const;
};

#endif // HUMAN_H
