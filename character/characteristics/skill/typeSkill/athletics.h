#ifndef ATHLETICS_H
#define ATHLETICS_H

#include "character/characteristics/skill/skill.h"

class Athletics : public Skill {
public:
    Athletics(bool trndFlag = false);
    ~Athletics();
};

#endif // ATHLETICS_H
