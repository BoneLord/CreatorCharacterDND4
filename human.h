#ifndef HUMAN_H
#define HUMAN_H

#include "race.h"
#include "size.h"
#include "vision.h"
#include "racetype.h"
#include "language.h"
#include "bonusability.h"
#include "bonusskill.h"
#include "bonusdefense.h"
#include "feattype.h"

class Human : public Race {
public:
    Human();
    ~Human();
};

#endif // HUMAN_H
