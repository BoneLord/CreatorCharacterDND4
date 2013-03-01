#ifndef HEAL_H
#define HEAL_H

#include "character/characteristics/skill/skill.h"

class Heal : public Skill {
public:
    Heal(bool trndFlag = false);
    ~Heal();
};

#endif // HEAL_H
