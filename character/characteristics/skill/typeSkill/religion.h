#ifndef RELIGION_H
#define RELIGION_H

#include "character/characteristics/skill/skill.h"

class Religion : public Skill {
public:
    Religion(bool trndFlag = false);
    ~Religion();
};

#endif // RELIGION_H
