#include "dungeoneering.h"

Dungeoneering::Dungeoneering(bool trndFlag) : Skill(trndFlag) {
    skill = dungeoneering;
    ability = wisdom_t;
}

Dungeoneering::~Dungeoneering() {
}
