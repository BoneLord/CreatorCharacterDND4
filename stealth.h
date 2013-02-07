#ifndef STEALTH_H
#define STEALTH_H

#include "skill.h"

class Stealth : public Skill {
public:
    Stealth(bool trndFlag = false);
    ~Stealth();
};

#endif // STEALTH_H
