#ifndef DWARF_H
#define DWARF_H

#include "character/characteristics/race/race.h"
#include "character/characteristics/race/characteristics/size.h"
#include "character/characteristics/race/characteristics/vision.h"
#include "character/characteristics/race/racetype.h"
#include "character/characteristics/language.h"
#include "character/characteristics/bonus/bonus.h"

class Dwarf : public Race {
public:
    Dwarf();
    ~Dwarf();
};

#endif // DWARF_H
