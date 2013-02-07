#ifndef RELIGION_H
#define RELIGION_H

#include "skill.h"

class Religion : public Skill {
public:
    Religion(bool trndFlag = false);
    ~Religion();
};

#endif // RELIGION_H
