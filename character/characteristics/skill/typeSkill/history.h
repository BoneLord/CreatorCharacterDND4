#ifndef HISTORY_H
#define HISTORY_H

#include "character/characteristics/skill/skill.h"

class History : public Skill {
public:
    History(bool trndFlag = false);
    ~History();
};

#endif // HISTORY_H
