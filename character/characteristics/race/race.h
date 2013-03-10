#ifndef RACE_H
#define RACE_H

#include "character/characteristics/race/characteristics/size.h"
#include "character/characteristics/race/characteristics/vision.h"
#include "character/characteristics/language.h"
#include "character/characteristics/bonus/bonus.h"
#include <vector>

class Race {
protected:
    int avgMinHeight;
    int avgMaxHeight;
    int avgMaxWeight;
    int avgMinWeight;
    int avgAge;
    Size size;
    int speed;
    Vision vision;
    std::vector<Language> languages;
    Bonus bonus;
public:
    virtual ~Race();
    int getAverageMinHeight() const;
    int getAverageMaxHeight() const;
    int getAverageMinWeight() const;
    int getAverageMaxWeight() const;
    int getAverageAge() const;
    Size getSize() const;
    int getSpeed() const;
    Vision getVision() const;
    const std::vector& getLanguages() const;
    const Bonus& getBonus() const;
    virtual const char * toString() const = 0;
    static Race* createRace(RaceType raceType);
};

#endif // RACE_H

