#ifndef FEAT_H
#define FEAT_H

#include "character/characteristics/feat/feattype.h"
#include "character/characteristics/equipment/armor/armortype.h"
#include <vector>

class Feat {
    std::vector<FeatType> feats;
public:
    Feat();
    ~Feat();
    int setFeat(FeatType f);
    int retraining(FeatType oldFeat, FeatType newFeat);
    bool getFeet(FeatType f) const;
};

#endif // FEAT_H
