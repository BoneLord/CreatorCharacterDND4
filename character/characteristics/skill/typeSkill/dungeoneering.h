#ifndef DUNGEONEERING_H
#define DUNGEONEERING_H

#include "character/characteristics/skill/skill.h"

class Dungeoneering : public Skill {
public:
    Dungeoneering(bool trndFlag = false);
    ~Dungeoneering();
};

#endif // DUNGEONEERING_H
