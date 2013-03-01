#ifndef ENDURANCE_H
#define ENDURANCE_H

#include "character/characteristics/skill/skill.h"

class Endurance : public Skill {
public:
    Endurance(bool trndFlag = false);
    ~Endurance();
};

#endif // ENDURANCE_H
