#ifndef THIEVERY_H
#define THIEVERY_H

#include "skill.h"

class Thievery : public Skill {
public:
    Thievery(bool trndFlag = false);
    ~Thievery();
};

#endif // THIEVERY_H
