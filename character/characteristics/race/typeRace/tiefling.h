#ifndef TIEFLING_H
#define TIEFLING_H

#include "character/characteristics/race/race.h"
#include "character/characteristics/race/characteristics/size.h"
#include "character/characteristics/race/characteristics/vision.h"
#include "character/characteristics/language.h"
#include "character/characteristics/bonus/bonus.h"

class Tiefling : public Race {
public:
    Tiefling(Language language);
    ~Tiefling();
    const char * toString() const;
};

#endif // TIEFLING_H
