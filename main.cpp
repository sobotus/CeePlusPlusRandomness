#include "header/player.h"

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
            player->addAttributePoints(27);
            std::cout << "********************" << std::endl;
            std::cout << "**Create Character**" << std::endl;
            std::cout << "********************" << std::endl;
            std::cout << "Available points: " << player->getAttributePoints();
            std::cout << std::endl
                      << std::endl;
            std::cout << "Charisma: " << player->getCharisma() << std::endl;
            std::cout << "Constitution: " << player->getConstitution() << std::endl;
            std::cout << "Strength: " << player->getStrength() << std::endl;
            std::cout << "Intelligence: " << player->getIntelligence() << std::endl;
            std::cout << "Dexterity: " << player->getDexterity() << std::endl;
            std::cout << "Wisdom: " << player->getWisdom() << std::endl;
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
                player->rollAttributes();

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