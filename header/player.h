#include <iostream>

class Player
{

private:
    std::string characterName;
    double hitpoints;
    double mana;

    // Attributes
    int strength;
    int constitution;
    int dexterity;
    int intelligence;
    int wisdom;
    int charisma;

public:
    // Constructor
    Player();
    // Destructor
    ~Player();
    // Get status
    double getHitpoints();
    double getMana();
    // Get attributes
    int getStrength();
    int getConstitution();
    int getDexterity();
    int getIntelligence();
    int getWisdom();
    int getCharisma();
    // Set character name
    void setCharacterName(std::string);
    // Set attributes
    void setStrength(int);
    void setConstitution(int);
    void setDexterity(int);
    void setIntelligence(int);
    void setWisdom(int);
    void setCharisma(int);
    // Display Information
    void displayCharacterInformation();
};