#include <iostream>

class Player
{

private:
    std::string characterName;
    float hitpoints;
    float mana;

    // Attributes
    int attributePoints;
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
    int getAttributePoints();
    std::string getCharacterName();
    // Set character name
    void setCharacterName(std::string);
    // Set attributes
    void setStrength(int);
    void setConstitution(int);
    void setDexterity(int);
    void setIntelligence(int);
    void setWisdom(int);
    void setCharisma(int);

    void addAttributePoints(int);
    void takeDamage(double);
    void useMana(double);
    void rollAttributes();
    // Display Information
    //
    // This void method will display:
    // The characters name, health, mana
    // plus all stats attributed to said character.
    void displayCharacterInformation();
};