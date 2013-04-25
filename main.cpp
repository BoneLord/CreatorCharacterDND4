#include <iostream>
#include "character/character.h"
#include "character/characteristics/deity/typeDeity/bahamut/bahamut.h"
#include "character/characteristics/deity/typeDeity/asmodeus/asmodeus.h"
#include "character/characteristics/deity/typeDeity/avandra/avandra.h"
#include "character/characteristics/deity/typeDeity/bane/bane.h"
#include "character/characteristics/deity/typeDeity/corellon/corellon.h"
#include "character/characteristics/deity/typeDeity/erathis/erathis.h"
#include "character/characteristics/deity/typeDeity/gruumsh/gruumsh.h"
#include "character/characteristics/deity/typeDeity/ioun/ioun.h"
#include "character/characteristics/deity/typeDeity/kord/kord.h"
#include "character/characteristics/deity/typeDeity/lolth/lolth.h"
#include "character/characteristics/deity/typeDeity/melora/melora.h"
#include "character/characteristics/deity/typeDeity/moradin/moradin.h"
#include "character/characteristics/deity/typeDeity/pelor/pelor.h"
#include "character/characteristics/deity/typeDeity/sehanine/sehanine.h"
#include "character/characteristics/deity/typeDeity/theravenqueen/theravenqueen.h"
#include "character/characteristics/deity/typeDeity/tiamat/tiamat.h"
#include "character/characteristics/deity/typeDeity/torog/torog.h"
#include "character/characteristics/deity/typeDeity/vecna/vecna.h"
#include "character/characteristics/deity/typeDeity/zehir/zehir.h"
#include "character/characteristics/class/typeClass/cleric.h"
#include "character/characteristics/race/typeRace/dragonborn.h"
#include "character/characteristics/race/typeRace/dwarf.h"
#include "character/characteristics/race/typeRace/eladrin.h"
#include "character/characteristics/race/typeRace/elf.h"
#include "character/characteristics/race/typeRace/halfelf.h"
#include "character/characteristics/race/typeRace/halfling.h"
#include "character/characteristics/race/typeRace/human.h"
#include "character/characteristics/race/typeRace/tiefling.h"
#include "character/characteristics/equipment/armor/typeArmor/chainmail.h"
#include "character/characteristics/equipment/armor/typeArmor/cloth.h"
#include "character/characteristics/equipment/armor/typeArmor/hide.h"
#include "character/characteristics/equipment/armor/typeArmor/leather.h"
#include "character/characteristics/equipment/armor/typeArmor/plate.h"
#include "character/characteristics/equipment/armor/typeArmor/scale.h"

/**
  Коды ошибок:
   0 - всё хорошо;
  -1 - нельзя тренировать навык второй раз;
  -2 - нельзя снять навык с тренировки (он не был тренирован);
  -3 - превышено максимальное количество навыков для тренировки;
  -4 - нельзя тренировать не классовые навыки;
  -5 - выбранное божество не совместимо с вашим мировоззрением;
  -6 - выбранное мировоззрение не совместимо с выбранным божеством;
  -7 - новые языки больше изучать нельзя (превышено количество доступных языков);
  -8 - данный язык вы уже знаете;
  -9 - данную черту вы уже знаете;
  -10 - такой черты для переобучения нет;
  -11 - данному классу тренировать этот навык нельзя
  -12 - навык предоставлен классом, отменить тренировку нельзя
*/

class ErrorMessage {
    ErrorMessage();
public:
    ~ErrorMessage();
    static char * textError(int errorID = 0);
};

ErrorMessage::ErrorMessage() {
}

ErrorMessage::~ErrorMessage() {
}

//static char * ErrorMessage::textError(int errorID) {
//    return 0;
//}

const char * genderToChar(Gender gender) {
    if (gender == male) {
        return "male";
    }
    else {
        return "female";
    }
}

const char * alignmentToChar(Alignment alignment) {
    switch (alignment) {
    case good:
        return "good";
    case lawfulGood:
        return "lawful good";
    case evil:
        return "evil";
    case chaoticEvil:
        return "chaotic evil";
    case unaligned:
        return "unaligned";
    }
    return 0;
}

const char * sizeToChar(Size size) {
    switch (size) {
    case tiny:
        return "tiny";
    case small:
        return "small";
    case medium:
        return "medium";
    case large:
        return "large";
    case huge:
        return "huge";
    case gargantuan:
        return "gargantuan";
    }
    return 0;
}

const char * defenseTypeToChar(DefenseType defense) {
    switch (defense) {
    case armorClass:
        return "armor class";
    case fortitude:
        return "fortitude";
    case reflex:
        return "reflex";
    case will:
        return "will";
    }
    return 0;
}

const char * languageToChar(Language language) {
    switch (language) {
    case common:
        return "common";
    case deepSpeech:
        return "deep speech";
    case draconic:
        return "draconic";
    case dwarven:
        return "dwarven";
    case elven:
        return "elven";
    case giant:
        return "giant";
    case goblin:
        return "goblin";
    case primordial:
        return "primordial";
    case supernal:
        return "supernal";
    case abyssal:
        return "abyssal";
    }
    return 0;
}

const char * visionToChar(Vision vision) {
    switch (vision) {
    case normal:
        return "normal";
    case lowLight:
        return "low-light";
    case dark:
        return "dark";
    }
    return 0;
}

void show(const Character * character);

int main() {
    Character character;
    character.setAge(21);
    character.setNameCharacter("Vondal");
    character.setNamePlayer("Vasya");
    character.setNameCommand("");
    character.setGender(male);
    character.setWeight(190);
    character.setHeight(100);
    character.setStrength(17);
    character.setConstitution(14);
    character.setDexterity(12);
    character.setIntellect(11);
    character.setWisdom(10);
    character.setCharisma(10);
    Race *race = new Elf();
    ClassCharacter *classCharacter = new Cleric();
    character.setRace(race);
    character.setClass(classCharacter);

    if (character.setAlignment(evil) < 0) {
        std::cout << "Selected aligment is not compatible with the chosen deity." << std::endl;
        return 0;
    }
    if (character.setDeity(&(Zehir::getInstance())) < 0) {
        std::cout << "Selected deity is not compatible with the chosen aligment." << std::endl;
        return 0;
    }
//    if (character.setSkillTrained(insight) < 0) {
//        std::cout << "Error3!" << std::endl;
//    }
//    if (character.setSkillTrained(religion) == -1) {
//        std::cout << "" << std::endl;
//    }
//    if (character.setSkillTrained(arcana) < 0) {
//        std::cout << "Error4!" << std::endl;
//    }
//    if (character.setSkillTrained(history) < 0) {
//        std::cout << "Error5!" << std::endl;
//    }
//    if (character.setSkillTrained(heal) < 0) {
//        std::cout << "Error6!" << std::endl;
//    }
//    if (character.setSkillTrained(diplomacy) < 0) {
//        std::cout << "Error7!" << std::endl;
//    }
    Armor * plate = new Plate();
    character.setArmor(plate);
    std::cout << "Age: " << character.getAge() << std::endl;
    std::cout << "Gender: " << genderToChar(character.getGender()) << std::endl;
    std::cout << "Height: " << character.getHeight() << std::endl;
    std::cout << "Weight: " << character.getWeight() << std::endl;
    std::cout << "Player name: " << character.getNamePlayer() << std::endl;
    std::cout << "Character name: " << character.getNameCharacter() << std::endl;
    std::cout << "Command name: " << character.getNameCommand() << std::endl;
    std::cout << "Level: " << character.getLevel() << std::endl;
    std::cout << "Total XP: " << character.getTotalExpereance() << std::endl;
    std::cout << "Size: " << sizeToChar(character.getSize()) << std::endl;
    std::cout << "Vision: " << visionToChar(character.getVision()) << std::endl;
    std::cout << "Alignment: " << alignmentToChar(character.getAlignment()) << std::endl;
    std::cout << "Deity: " << character.getDeity()->toString() << std::endl;
    std::cout << "Initiative: " << character.getInitiative() << std::endl;
    std::cout << "Strength: " << character.getStrScore() << std::endl;
    std::cout << "Strength mod: " << character.getStrMod() << std::endl;
    std::cout << "Constitution: " << character.getConScore() << std::endl;
    std::cout << "Constitution mod: " << character.getConMod() << std::endl;
    std::cout << "Dexterity: " << character.getDexScore() << std::endl;
    std::cout << "Dexterity mod: " << character.getDexMod() << std::endl;
    std::cout << "Intellect: " << character.getIntScore() << std::endl;
    std::cout << "Intellect mod: " << character.getIntMod() << std::endl;
    std::cout << "Wisdom: " << character.getWisScore() << std::endl;
    std::cout << "Wisdom mod: " << character.getWisMod() << std::endl;
    std::cout << "Charisma: " << character.getChrScore() << std::endl;
    std::cout << "Charisma mod: " << character.getChrMod() << std::endl;
    std::cout << "Max hit point: " << character.getMaxHitPoint() << std::endl;
    std::cout << "Bloodied hp: " << character.getBloodied() << std::endl;
    std::cout << "Surge value: " << character.getHealingSurgesValue() << std::endl;
    std::cout << "Surge per day: " << character.getHealingSurgesPerDay() << std::endl;
    std::cout << "Acrobatics: " << character.getAcrobatics() << std::endl;
    std::cout << "Arcana: " << character.getArcana() << std::endl;
    std::cout << "Athletics: " << character.getAthletics() << std::endl;
    std::cout << "Bluff: " << character.getBluff() << std::endl;
    std::cout << "Diplomacy: " << character.getDiplomacy() << std::endl;
    std::cout << "Dungeoneering: " << character.getDungeoneering() << std::endl;
    std::cout << "Endurance: " << character.getEndurance() << std::endl;
    std::cout << "Heal: " << character.getHeal() << std::endl;
    std::cout << "History: " << character.getHistory() << std::endl;
    std::cout << "Insight: " << character.getInsight() << std::endl;
    std::cout << "Intimidate: " << character.getIntimidate() << std::endl;
    std::cout << "Nature: " << character.getNature() << std::endl;
    std::cout << "Perception: " << character.getPerception() << std::endl;
    std::cout << "Religion: " << character.getReligion() << std::endl;
    std::cout << "Stealth: " << character.getStealth() << std::endl;
    std::cout << "Streetwise: " << character.getStreetwise() << std::endl;
    std::cout << "Thievery: " << character.getThievery() << std::endl;
    std::cout << "Armor class: " << character.getArmorClass() << std::endl;
    std::cout << "Fortitude: " << character.getFortitude() << std::endl;
    std::cout << "Reflex: " << character.getReflex() << std::endl;
    std::cout << "Will: " << character.getWill() << std::endl;
    std::cout << "Speed: " << character.getSpeed() << std::endl;
    std::cout << "Passive insight: " << character.getPassiveInsight() << std::endl;
    std::cout << "Passive perception: " << character.getPassivePerception() << std::endl;

//    const Armor * const armor = new Scale();
//    std::cout << "" << std::endl;
//    std::cout << "Armor kind:    " << armor->isAddModifiersToArmor() << std::endl;
//    std::cout << "Armor bonus:   " << armor->getArmorBonus() << std::endl;
//    std::cout << "Skill penalty: " << armor->getSkillPenalty() << std::endl;
//    std::cout << "Speed penalty: " << armor->getSpeedPenalty() << std::endl;
//    std::cout << "Armor weight:  " << armor->getWeight() << std::endl;
//    std::cout << "Armor price:   " << armor->getPrice() << std::endl;
//    delete armor;

//    armor = new Chainmale();
//    std::cout << "" << std::endl;
//    std::cout << "Armor kind:    " << armor->isAddModifiersToArmor() << std::endl;
//    std::cout << "Armor bonus:   " << armor->getArmorBonus() << std::endl;
//    std::cout << "Skill penalty: " << armor->getSkillPenalty() << std::endl;
//    std::cout << "Speed penalty: " << armor->getSpeedPenalty() << std::endl;
//    std::cout << "Armor weight:  " << armor->getWeight() << std::endl;
//    std::cout << "Armor price:   " << armor->getPrice() << std::endl;
//    delete armor;

//    armor = new Leather();
//    std::cout << "" << std::endl;
//    std::cout << "Armor kind:    " << armor->isAddModifiersToArmor() << std::endl;
//    std::cout << "Armor bonus:   " << armor->getArmorBonus() << std::endl;
//    std::cout << "Skill penalty: " << armor->getSkillPenalty() << std::endl;
//    std::cout << "Speed penalty: " << armor->getSpeedPenalty() << std::endl;
//    std::cout << "Armor weight:  " << armor->getWeight() << std::endl;
//    std::cout << "Armor price:   " << armor->getPrice() << std::endl;
//    delete armor;

//    armor = new Hide();
//    std::cout << "" << std::endl;
//    std::cout << "Armor kind:    " << armor->isAddModifiersToArmor() << std::endl;
//    std::cout << "Armor bonus:   " << armor->getArmorBonus() << std::endl;
//    std::cout << "Skill penalty: " << armor->getSkillPenalty() << std::endl;
//    std::cout << "Speed penalty: " << armor->getSpeedPenalty() << std::endl;
//    std::cout << "Armor weight:  " << armor->getWeight() << std::endl;
//    std::cout << "Armor price:   " << armor->getPrice() << std::endl;
//    delete armor;

//    armor = new Plate();
//    std::cout << "" << std::endl;
//    std::cout << "Armor kind:    " << armor->isAddModifiersToArmor() << std::endl;
//    std::cout << "Armor bonus:   " << armor->getArmorBonus() << std::endl;
//    std::cout << "Skill penalty: " << armor->getSkillPenalty() << std::endl;
//    std::cout << "Speed penalty: " << armor->getSpeedPenalty() << std::endl;
//    std::cout << "Armor weight:  " << armor->getWeight() << std::endl;
//    std::cout << "Armor price:   " << armor->getPrice() << std::endl;
//    delete armor;

//    armor = new Cloth();
//    std::cout << "" << std::endl;
//    std::cout << "Armor kind:    " << armor->isAddModifiersToArmor() << std::endl;
//    std::cout << "Armor bonus:   " << armor->getArmorBonus() << std::endl;
//    std::cout << "Skill penalty: " << armor->getSkillPenalty() << std::endl;
//    std::cout << "Speed penalty: " << armor->getSpeedPenalty() << std::endl;
//    std::cout << "Armor weight:  " << armor->getWeight() << std::endl;
//    std::cout << "Armor price:   " << armor->getPrice() << std::endl;
//    delete armor;
    character.addExpereance(100000);

    return 0;
}

void show(const Character * character) {
    std::cout << "Age: " << character.getAge() << std::endl;
    std::cout << "Gender: " << genderToChar(character.getGender()) << std::endl;
    std::cout << "Height: " << character.getHeight() << std::endl;
    std::cout << "Weight: " << character.getWeight() << std::endl;
    std::cout << "Player name: " << character.getNamePlayer() << std::endl;
    std::cout << "Character name: " << character.getNameCharacter() << std::endl;
    std::cout << "Command name: " << character.getNameCommand() << std::endl;
    std::cout << "Level: " << character.getLevel() << std::endl;
    std::cout << "Total XP: " << character.getTotalExpereance() << std::endl;
    std::cout << "Size: " << sizeToChar(character.getSize()) << std::endl;
    std::cout << "Vision: " << visionToChar(character.getVision()) << std::endl;
    std::cout << "Alignment: " << alignmentToChar(character.getAlignment()) << std::endl;
    std::cout << "Deity: " << character.getDeity()->toString() << std::endl;
    std::cout << "Initiative: " << character.getInitiative() << std::endl;
    std::cout << "Strength: " << character.getStrScore() << std::endl;
    std::cout << "Strength mod: " << character.getStrMod() << std::endl;
    std::cout << "Constitution: " << character.getConScore() << std::endl;
    std::cout << "Constitution mod: " << character.getConMod() << std::endl;
    std::cout << "Dexterity: " << character.getDexScore() << std::endl;
    std::cout << "Dexterity mod: " << character.getDexMod() << std::endl;
    std::cout << "Intellect: " << character.getIntScore() << std::endl;
    std::cout << "Intellect mod: " << character.getIntMod() << std::endl;
    std::cout << "Wisdom: " << character.getWisScore() << std::endl;
    std::cout << "Wisdom mod: " << character.getWisMod() << std::endl;
    std::cout << "Charisma: " << character.getChrScore() << std::endl;
    std::cout << "Charisma mod: " << character.getChrMod() << std::endl;
    std::cout << "Max hit point: " << character.getMaxHitPoint() << std::endl;
    std::cout << "Bloodied hp: " << character.getBloodied() << std::endl;
    std::cout << "Surge value: " << character.getHealingSurgesValue() << std::endl;
    std::cout << "Surge per day: " << character.getHealingSurgesPerDay() << std::endl;
    std::cout << "Acrobatics: " << character.getAcrobatics() << std::endl;
    std::cout << "Arcana: " << character.getArcana() << std::endl;
    std::cout << "Athletics: " << character.getAthletics() << std::endl;
    std::cout << "Bluff: " << character.getBluff() << std::endl;
    std::cout << "Diplomacy: " << character.getDiplomacy() << std::endl;
    std::cout << "Dungeoneering: " << character.getDungeoneering() << std::endl;
    std::cout << "Endurance: " << character.getEndurance() << std::endl;
    std::cout << "Heal: " << character.getHeal() << std::endl;
    std::cout << "History: " << character.getHistory() << std::endl;
    std::cout << "Insight: " << character.getInsight() << std::endl;
    std::cout << "Intimidate: " << character.getIntimidate() << std::endl;
    std::cout << "Nature: " << character.getNature() << std::endl;
    std::cout << "Perception: " << character.getPerception() << std::endl;
    std::cout << "Religion: " << character.getReligion() << std::endl;
    std::cout << "Stealth: " << character.getStealth() << std::endl;
    std::cout << "Streetwise: " << character.getStreetwise() << std::endl;
    std::cout << "Thievery: " << character.getThievery() << std::endl;
    std::cout << "Armor class: " << character.getArmorClass() << std::endl;
    std::cout << "Fortitude: " << character.getFortitude() << std::endl;
    std::cout << "Reflex: " << character.getReflex() << std::endl;
    std::cout << "Will: " << character.getWill() << std::endl;
    std::cout << "Speed: " << character.getSpeed() << std::endl;
    std::cout << "Passive insight: " << character.getPassiveInsight() << std::endl;
    std::cout << "Passive perception: " << character.getPassivePerception() << std::endl;
}
