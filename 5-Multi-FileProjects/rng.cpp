#include "rng.h"
#include <iostream>
#include <random>
void SeedRng(int given) 
{
	srand(given);
}
int rng()
{
	return rand() % 100 + 1;
}
int rangRange(int min, int max) 
{
	return rand() % max + min;
}
bool rngb()
{
	return rand() % 1;
}
bool rngBchance(int chance) 
{
	int rando = rand() % 100 + 1;
	if (rando <= chance) 
	{
		return true;
	}
	else
	{
		return false;
	}
	return (rando <= chance);
}