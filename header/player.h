#pragma once
#include "character.h"
#include <vector>
#include <iostream>

class Player
{
private:
    int ID;
    std::string name;
    std::vector<Character> characters;

public:
    // Constructor
    Player();
    // Destructor
    ~Player();
};