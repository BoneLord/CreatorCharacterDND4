#ifndef ELF_H
#define ELF_H

#include "character/characteristics/race/race.h"
#include "character/characteristics/race/characteristics/size.h"
#include "character/characteristics/race/characteristics/vision.h"
#include "character/characteristics/language.h"
#include "character/characteristics/bonus/bonus.h"

class Elf : public Race {
public:
    Elf();
    ~Elf();
    const char * toString() const;
};

#endif // ELF_H
