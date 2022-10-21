#include "header/player.h"

// Constructor

Player::Player()
{
    this->hitpoints = 100 + this->constitution / 5.5;
    this->mana = 100;
}

// Destructor

Player::~Player()
{
}

// Set character name to parameter of method.
// Input given through main loop
void Player::setCharacterName(std::string name)
{
    this->characterName = name;
}

std::string Player::getCharacterName()
{
    return this->characterName;
}

int Player::getAttributePoints()
{
    return this->attributePoints;
}

int Player::getCharisma() { return this->charisma; }
int Player::getConstitution() { return this->constitution; }
int Player::getStrength() { return this->strength; }
int Player::getIntelligence() { return this->intelligence; }
int Player::getDexterity() { return this->dexterity; }
int Player::getWisdom() { return this->wisdom; }

//
// Set Attributes
// Strength, Constitution, Dexterity, Intelligence, Wisdom and Charisma
//

void Player::setStrength(int strength)
{
    this->strength = strength;
}
void Player::setConstitution(int constitution)
{
    this->constitution = constitution;
}
void Player::setDexterity(int dexterity)
{
    this->dexterity = dexterity;
}
void Player::setIntelligence(int intelligence)
{
    this->intelligence = intelligence;
}
void Player::setWisdom(int wisdom)
{
    this->wisdom = wisdom;
}
void Player::setCharisma(int charisma)
{
    this->charisma = charisma;
}

void Player::addAttributePoints(int points)
{
    this->attributePoints += points;
}

void Player::takeDamage(double damage)
{
    this->hitpoints -= damage;
}
void Player::useMana(double mana)
{
    this->mana -= mana;
}
//
// Display character information
//

void Player::displayCharacterInformation()
{
    // display code goes here
}
