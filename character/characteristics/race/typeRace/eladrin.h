#ifndef ELADRIN_H
#define ELADRIN_H

#include <cstring>
#include "character/characteristics/race/race.h"
#include "character/characteristics/race/characteristics/size.h"
#include "character/characteristics/race/characteristics/vision.h"
#include "character/characteristics/language.h"
#include "character/characteristics/bonus/bonus.h"

class Eladrin : public Race {
public:
    Eladrin();
    ~Eladrin();
    const char * toString() const;
};

#endif // ELADRIN_H
