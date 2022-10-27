#include <actor.h>
#include <dice.h>

Actor::Actor()
{
	this->hitpoints = 1 + this->constitution / 5.5; //making this a static method is not gonna be the best. we'll want a user-defined default, but whatever.
	this->mana = 100; //ditto.
	this->attributePoints = 27;

}

Actor::~Actor()
{
}

// Set Actor name to parameter of method.
// Input given through main loop
void Actor::setActorName(std::string name)
{
    this->ActorName = name;
}

std::string Actor::getActorName()
{
    return this->ActorName;
}

int Actor::getAttributePoints()
{
    return this->attributePoints;
}

int Actor::getCharisma() { return this->charisma; }
int Actor::getConstitution() { return this->constitution; }
int Actor::getStrength() { return this->strength; }
int Actor::getIntelligence() { return this->intelligence; }
int Actor::getDexterity() { return this->dexterity; }
int Actor::getWisdom() { return this->wisdom; }

//
// Set Attributes
// Strength, Constitution, Dexterity, Intelligence, Wisdom and Charisma
//

void Actor::setStrength(int strength)
{
    this->strength = strength;
}
void Actor::setConstitution(int constitution)
{
    this->constitution = constitution;
}
void Actor::setDexterity(int dexterity)
{
    this->dexterity = dexterity;
}
void Actor::setIntelligence(int intelligence)
{
    this->intelligence = intelligence;
}
void Actor::setWisdom(int wisdom)
{
    this->wisdom = wisdom;
}
void Actor::setCharisma(int charisma)
{
    this->charisma = charisma;
}


void Actor::rollAttributes()
{

}
//
// Display Actor information
//

void Actor::displayActorInfo()
{
    // display code goes here
}