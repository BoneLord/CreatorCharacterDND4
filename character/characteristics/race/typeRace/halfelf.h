#ifndef HALFELF_H
#define HALFELF_H

#include <cstring>
#include "character/characteristics/race/race.h"
#include "character/characteristics/race/characteristics/size.h"
#include "character/characteristics/race/characteristics/vision.h"
#include "character/characteristics/language.h"
#include "character/characteristics/bonus/bonus.h"

class HalfElf: public Race {
public:
    HalfElf(Language language);
    ~HalfElf();
    const char * toString() const;
};

#endif // HALFELF_H
