#include "header/player.h";

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

//
// Display character information
//

void Player::displayCharacterInformation()
{
}