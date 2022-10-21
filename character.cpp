#include "character.h"

Character::Character()
{
    this->hitpoints = 100 + this->constitution / 5.5;
    this->mana = 100;
}

// Set character name to parameter of method.
// Input given through main loop
void Character::setCharacterName(std::string name)
{
    this->characterName = name;
}

std::string Character::getCharacterName()
{
    return this->characterName;
}

int Character::getAttributePoints()
{
    return this->attributePoints;
}

int Character::getCharisma() { return this->charisma; }
int Character::getConstitution() { return this->constitution; }
int Character::getStrength() { return this->strength; }
int Character::getIntelligence() { return this->intelligence; }
int Character::getDexterity() { return this->dexterity; }
int Character::getWisdom() { return this->wisdom; }

//
// Set Attributes
// Strength, Constitution, Dexterity, Intelligence, Wisdom and Charisma
//

void Character::setStrength(int strength)
{
    this->strength = strength;
}
void Character::setConstitution(int constitution)
{
    this->constitution = constitution;
}
void Character::setDexterity(int dexterity)
{
    this->dexterity = dexterity;
}
void Character::setIntelligence(int intelligence)
{
    this->intelligence = intelligence;
}
void Character::setWisdom(int wisdom)
{
    this->wisdom = wisdom;
}
void Character::setCharisma(int charisma)
{
    this->charisma = charisma;
}

void Character::addAttributePoints(int points)
{
    this->attributePoints += points;
}

void Character::takeDamage(double damage)
{
    this->hitpoints -= damage;
}
void Character::useMana(double mana)
{
    this->mana -= mana;
}

void Character::rollAttributes()
{
    // Roll random numbers between ATTRIBUTEPOINTS and 0,
    // Assign random amount of points / 6
}
//
// Display character information
//

void Character::displayCharacterInformation()
{
    // display code goes here
}