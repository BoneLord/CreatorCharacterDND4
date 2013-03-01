#ifndef STEALTH_H
#define STEALTH_H

#include "character/characteristics/skill/skill.h"

class Stealth : public Skill {
public:
    Stealth(bool trndFlag = false);
    ~Stealth();
};

#endif // STEALTH_H
