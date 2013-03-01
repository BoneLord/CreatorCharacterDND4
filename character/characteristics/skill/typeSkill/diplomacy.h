#ifndef DIPLOMACY_H
#define DIPLOMACY_H

#include "character/characteristics/skill/skill.h"

class Diplomacy : public Skill {
public:
    Diplomacy(bool trndFlag = false);
    ~Diplomacy();
};

#endif // DIPLOMACY_H
