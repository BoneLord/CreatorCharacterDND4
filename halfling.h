#ifndef HALFLING_H
#define HALFLING_H

#include "race.h"
#include "size.h"
#include "vision.h"
#include "racetype.h"
#include "language.h"
#include "bonusability.h"
#include "bonusskill.h"
#include "bonusdefense.h"
#include "feattype.h"

class Halfling : public Race {
public:
    Halfling();
    ~Halfling();
};

#endif // HALFLING_H
