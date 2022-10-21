#include "player.h"
#include "character.h"

int main()
{
    std::string authors = "Danny Carrington";
    bool isRunning = true;

    enum GameState
    {
        Title,
        CreateCharacter,
        isPlaying,
        Pause,
        CharacterScreen
    };

    GameState state = Title;

    std::string input;

    Player *player = new Player();
    Character *character = new Character();

    while (isRunning)
    {
        switch (state)
        {
        case Title:
            std::cout << "Dungeons & Dragons - Terminal" << std::endl;
            std::cout << "Created by: " + authors << std::endl
                      << std::endl;
            std::cout << "1. Create Character" << std::endl;

            std::cout << "Make your choice: ";
            std::cin >> input;
            if (input == "1")
            {
                state = CreateCharacter;
            }
            break;
        case CreateCharacter:
            std::cout << "********************" << std::endl;
            std::cout << "**Create Character**" << std::endl;
            std::cout << "********************" << std::endl;
            std::cout << "Available points: " << character->getAttributePoints();
            std::cout << std::endl
                      << std::endl;
            std::cout << "Charisma: " << character->getCharisma() << std::endl;
            std::cout << "Constitution: " << character->getConstitution() << std::endl;
            std::cout << "Strength: " << character->getStrength() << std::endl;
            std::cout << "Intelligence: " << character->getIntelligence() << std::endl;
            std::cout << "Dexterity: " << character->getDexterity() << std::endl;
            std::cout << "Wisdom: " << character->getWisdom() << std::endl;
            std::cout << std::endl;

            std::cout << "Are you happy with your attributes? (Y/N)";
            std::cin >> input;
            if (input == "Y" || input == "y")
            {
                state = Title;
            }
            else
            {
                // Ask if player would like random assignment HERE

                // Roll attributes if YES.
                character->rollAttributes();

                // ELSE reset values and allow re-assignment
            }
            break;
        case isPlaying:
            break;
        case Pause:
            break;
        case CharacterScreen:
            break;
        }
    }

    return 0;
}