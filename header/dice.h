#pragma once

#include <iostream>

int roll(int times, int diceSize, int totalMod)
{
	int total = 0;
	for (int i = 0; i < times; i++) 
	{
		total = totalMod + (std::rand() % diceSize);
		total = total + total;
	}
	return total;
}

