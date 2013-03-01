#ifndef NATURE_H
#define NATURE_H

#include "character/characteristics/skill/skill.h"

class Nature : public Skill {
public:
    Nature(bool trndFlag = false);
    ~Nature();
};

#endif // NATURE_H
