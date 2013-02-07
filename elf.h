#ifndef ELF_H
#define ELF_H

#include "race.h"
#include "size.h"
#include "vision.h"
#include "racetype.h"
#include "language.h"
#include "bonusability.h"
#include "bonusskill.h"
#include "bonusdefense.h"
#include "feattype.h"

class Elf : public Race {
public:
    Elf();
    ~Elf();
};

#endif // ELF_H
