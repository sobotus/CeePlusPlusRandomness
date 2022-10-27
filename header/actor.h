#pragma once
#include <iostream>

/*
	This is just meant to be a generic class for different types of creatures, 
	mainly NPCs not tied to the existing player class.
	Will extend into ownership under some kind of "DM" instance
*/

class Actor
{

private:
    std::string ActorName;
    std::string ActorRole; //descriptive tool for the DM to name the creature something useful
    double hitpoints;
    double mana;

    // Attributes
    int attributePoints;
    int strength;
    int constitution;
    int dexterity;
    int intelligence;
    int wisdom;
    int charisma;
    int moveSpeed;

public:
    // Constructor
    Actor();
    // Destructor
    ~Actor();
    // Get status
    double getHitpoints();
    double getMana();
    // Get attributes
    int getAttributePoints();
    int getStrength();
    int getConstitution();
    int getDexterity();
    int getIntelligence();
    int getWisdom();
    int getCharisma();
    int getAttributePoints();
    std::string getActorName();
    std::string getActorRole();

    // Set character name
    void setActorName(std::string);
    // Set attributes
    void setStrength(int);
    void setConstitution(int);
    void setDexterity(int);
    void setIntelligence(int);
    void setWisdom(int);
    void setCharisma(int);

    void rollAttributes();
    void setAttributes();
    //DM-tool function 

    void displayActorInfo();
};