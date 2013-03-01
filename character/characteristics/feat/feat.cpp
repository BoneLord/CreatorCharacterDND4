#include "character/characteristics/feat/feat.h"

Feat::Feat() {
}

Feat::~Feat() {
}

int Feat::setFeat(FeatType f) {
    if (getFeet(f)) {
        return -9;
    }
    feats.push_back(f);
    return 0;
}

int Feat::retraining(FeatType oldFeat, FeatType newFeat) {
    for (std::vector<FeatType>::iterator it = feats.begin(); it < feats.end(); ++it) {
        if (*it == oldFeat) {
            *it = newFeat;
            return 0;
        }
    }
    return -10;
}

bool Feat::getFeet(FeatType f) const {
    for (std::vector<FeatType>::const_iterator it = feats.begin(); it < feats.end(); ++it) {
        if (*it == f) {
            return true;
        }
    }
    return false;
}

//Feat *Feat::createFeat(FeatType featType) {
//    Feat *feat;
//    switch (featType) {
//    case actionSurge:
//        break;
//    case agileHunter:
//        break;
//    alertness,
//    armorOfBahamut,
//    aPChainmail,
//    aPLeather,
//    aPhide,
//    aPPlate,
//    aPScale,
//    aPCloth,
//    astralFire,
//    avandrasRescue,
//    backstabber,
//    bladeOpportunist,
//    burningBlizzard,
//    combatReflexes,
//    corellonsGrace,
//    darkFury,
//    defensiveMobility,
//    distractingShield,
//    dodgeGiants,
//    dragonbornFrenzy,
//    dragonbornSenses,
//    durable,
//    dwarvenWeaponTraining,
//    eladrinSoldier,
//    elvenPrecision,
//    enlargedDragonBreath,
//    escapeArtist,
//    expandedSpellbook,
//    farShot,
//    farThrow,
//    fastRunner,
//    ferociousRebuke,
//    groupInsight,
//    halflingAgility,
//    harmonyOfErathis,
//    healingHands,
//    hellfireBlood,
//    humanPerseverance,
//    improvedDarkOnesBlessing,
//    improvedFateOfTheVoid,
//    improvedInitiative,
//    improvedMistyStep,
//    inspiredRecovery,
//    iounsPoise,
//    jackOfAllTrades,
//    kordsFavor,
//    lethalHunter,
//    lightStep,
//    linguist,
//    longJumper,
//    lostInTheCrowd,
//    melorasTide,
//    moradinsResolve,
//    mountedCombat,
//    nimbleBlade,
//    pelorsRadiance,
//    potentChallenge,
//    powerAttack,
//    powerfulCharge,
//    preciseHunter,
//    pressTheAdvantage,
//    quickDraw,
//    ragingStorm,
//    ravenQueensBlessing,
//    ritualCaster,
//    sehaninesReversal,
//    sPHeavy,
//    sPLight,
//    shieldPush,
//    skillFocus,
//    skillTraining,
//    sureClimber,
//    surpriseKnockdown,
//    tacticalAssault,
//    toughness,
//    twoWeaponDefense,
//    twoWeaponFighting,
//    wFAxe,
//    wFFlail,
//    wFHammer,
//    wFHeavyBlade,
//    wFLightBlade,
//    wFMace,
//    wFPick,
//    wFPolearm,
//    wFSpear,
//    wFStaff,
//    wPSimpleMeleeWeapons,
//    wPMilitaryMeleeWeapons,
//    wPSuperiorMeleeWeapons,
//    wPImprovisedMeleeWeapons,
//    wPMilitaryRangedWeapons,
//    case wPSuperiorRangedWeapons:
//        break;
//    case wPImprovisedRangedWeapons:
//        break;
//    }
//    return 0;
//}
