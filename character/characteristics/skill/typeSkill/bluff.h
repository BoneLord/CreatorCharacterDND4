#ifndef BLUFF_H
#define BLUFF_H

#include "character/characteristics/skill/skill.h"

class Bluff : public Skill {
public:
    Bluff(bool trndFlag = false);
    ~Bluff();
};

#endif // BLUFF_H
