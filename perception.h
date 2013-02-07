#ifndef PERCEPTION_H
#define PERCEPTION_H

#include "skill.h"

class Perception : public Skill {
public:
    Perception(bool trndFlag = false);
    ~Perception();
};

#endif // PERCEPTION_H
