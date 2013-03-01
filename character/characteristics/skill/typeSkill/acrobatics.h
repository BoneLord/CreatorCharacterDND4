#ifndef ACROBATICS_H
#define ACROBATICS_H

#include "character/characteristics/skill/skill.h"

class Acrobatics : public Skill {
public:
    Acrobatics(bool trndFlag = false);
    ~Acrobatics();
};

#endif // ACROBATICS_H
