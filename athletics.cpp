#include "athletics.h"

Athletics::Athletics(bool trndFlag) : Skill(trndFlag) {
    skill = athletics;
    ability = strength_t;
}

Athletics::~Athletics() {
}
