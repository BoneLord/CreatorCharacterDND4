#include <iostream>
#include "character.h"
#include "racetype.h"
#include "classtype.h"
#include "equipment.h"

/**
   оды ошибок:
   0 - всЄ хорошо;
  -1 - нельз€ тренировать навык второй раз;
  -2 - нельз€ сн€ть навык с тренировки (он не был тренирован);
  -3 - превышено максимальное количество навыков дл€ тренировки;
  -4 - нельз€ тренировать не классовые навыки;
  -5 - выбранное божество не совместимо с вашим мировоззрением;
  -6 - выбранное мировоззрение не совместимо с выбранным божеством;
  -7 - новые €зыки больше изучать нельз€ (превышено количество доступных €зыков);
  -8 - данный €зык вы уже знаете;
  -9 - данную черту вы уже знаете;
  -10 - такой черты дл€ переобучени€ нет;
*/

char* genderToChar(Gender gender) {
    if (gender == male) {
        return "male";
    }
    else {
        return "female";
    }
}

int main() {
    Character character(dragonBorn, cleric, "Vondal", "Oleg", "", 21, male, 190, 100);
    if (character.setAlignment(good) < 0) {
        std::cout << "Error1!" << std::endl;
    }
    if (character.setDeityType(Avandra) < 0) {
        std::cout << "Error2!" << std::endl;
    }
    if (character.setSkillTrained(insight) < 0) {
        std::cout << "Error3!" << std::endl;
    }
    if (character.setSkillTrained(religion) == -1) {
        std::cout << "нельз€ тренировать навык второй раз!" << std::endl;
    }
    if (character.setSkillTrained(arcana) < 0) {
        std::cout << "Error4!" << std::endl;
    }
    if (character.setSkillTrained(history) < 0) {
        std::cout << "Error5!" << std::endl;
    }
    if (character.setSkillTrained(heal) < 0) {
        std::cout << "Error6!" << std::endl;
    }
    if (character.setSkillTrained(diplomacy) < 0) {
        std::cout << "Error7!" << std::endl;
    }
    character.setArmor(plate);
    std::cout << "Age: " << character.getAge() << std::endl;
    std::cout << "Gender: " << genderToChar(character.getGender()) << std::endl;
    std::cout << "Height: " << character.getHeight() << std::endl;
    std::cout << "Weight: " << character.getWeight() << std::endl;
    std::cout << "Player name: " << character.getNamePlayer() << std::endl;
    std::cout << "Character name: " << character.getNameCharacter() << std::endl;
    std::cout << "Command name: " << character.getNameCommand() << std::endl;
    std::cout << "Level: " << character.getLevel() << std::endl;
//    std::cout << "Class: " << character.getClass() << std::endl;
//    std::cout << "Race: " << character.getRace() << std::endl;
    std::cout << "Total XP: " << character.getTotalExpereance() << std::endl;
//    std::cout << "Size: " << character.getSize() << std::endl;
    std::cout << "Alignment: " << character.getAlignment() << std::endl;
    std::cout << "DeityType: " << character.getDeityType() << std::endl;
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


// “естирование снар€жени€ игрока (доспехи)
//    Equipment eq;
//    eq.setArmor(scale);
//    Armor const * const armor = eq.getArmor();
//    std::cout << "„ушуйчатый доспех" << std::endl;
//    std::cout << "Armor kind:    " << armor->isAddModifiersToArmor() << std::endl;
//    std::cout << "Armor bonus:   " << armor->getArmorBonus() << std::endl;
//    std::cout << "Skill penalty: " << armor->getSkillPenalty() << std::endl;
//    std::cout << "Speed penalty: " << armor->getSpeedPenalty() << std::endl;
//    std::cout << "Armor weight:  " << armor->getWeight() << std::endl;
//    std::cout << "Armor price:   " << armor->getPrice() << std::endl;

//    eq.setArmor(chainmail);
//    std::cout << " ольчужный доспех" << std::endl;
//    std::cout << "Armor kind:    " << armor->isAddModifiersToArmor() << std::endl;
//    std::cout << "Armor bonus:   " << armor->getArmorBonus() << std::endl;
//    std::cout << "Skill penalty: " << armor->getSkillPenalty() << std::endl;
//    std::cout << "Speed penalty: " << armor->getSpeedPenalty() << std::endl;
//    std::cout << "Armor weight:  " << armor->getWeight() << std::endl;
//    std::cout << "Armor price:   " << armor->getPrice() << std::endl;

//    eq.setArmor(leather);
//    std::cout << " ожанный доспех" << std::endl;
//    std::cout << "Armor kind:    " << armor->isAddModifiersToArmor() << std::endl;
//    std::cout << "Armor bonus:   " << armor->getArmorBonus() << std::endl;
//    std::cout << "Skill penalty: " << armor->getSkillPenalty() << std::endl;
//    std::cout << "Speed penalty: " << armor->getSpeedPenalty() << std::endl;
//    std::cout << "Armor weight:  " << armor->getWeight() << std::endl;
//    std::cout << "Armor price:   " << armor->getPrice() << std::endl;

//    eq.setArmor(hide);
//    std::cout << "ƒоспех из шкур" << std::endl;
//    std::cout << "Armor kind:    " << armor->isAddModifiersToArmor() << std::endl;
//    std::cout << "Armor bonus:   " << armor->getArmorBonus() << std::endl;
//    std::cout << "Skill penalty: " << armor->getSkillPenalty() << std::endl;
//    std::cout << "Speed penalty: " << armor->getSpeedPenalty() << std::endl;
//    std::cout << "Armor weight:  " << armor->getWeight() << std::endl;
//    std::cout << "Armor price:   " << armor->getPrice() << std::endl;

//    eq.setArmor(plate);
//    std::cout << "Ћатный доспех" << std::endl;
//    std::cout << "Armor kind:    " << armor->isAddModifiersToArmor() << std::endl;
//    std::cout << "Armor bonus:   " << armor->getArmorBonus() << std::endl;
//    std::cout << "Skill penalty: " << armor->getSkillPenalty() << std::endl;
//    std::cout << "Speed penalty: " << armor->getSpeedPenalty() << std::endl;
//    std::cout << "Armor weight:  " << armor->getWeight() << std::endl;
//    std::cout << "Armor price:   " << armor->getPrice() << std::endl;

//    eq.setArmor(cloth);
//    std::cout << "“каневый доспех" << std::endl;
//    std::cout << "Armor kind:    " << armor->isAddModifiersToArmor() << std::endl;
//    std::cout << "Armor bonus:   " << armor->getArmorBonus() << std::endl;
//    std::cout << "Skill penalty: " << armor->getSkillPenalty() << std::endl;
//    std::cout << "Speed penalty: " << armor->getSpeedPenalty() << std::endl;
//    std::cout << "Armor weight:  " << armor->getWeight() << std::endl;
//    std::cout << "Armor price:   " << armor->getPrice() << std::endl;
    return 0;
}
