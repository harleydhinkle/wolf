#include "battle.h"
#include<iostream>
void printEntity(Entity target) 
{
	std::cout << target.hitPoints << std::endl;
	std::cout << target.atkPoints << std::endl;
	std::cout << target.defPoints << std::endl;
}
void battle(Entity combatantA, Entity combatantB)
{
	bool inProgress = true;
	while (inProgress)
	{
		std::cout << "Player Stats" << std::endl;
		printEntity(combatantA);
		std::cout << "Zombie Stats" << std::endl;
		printEntity(combatantB);
		combatantA.hitPoints -= combatantB.atkPoints - combatantA.defPoints;
		combatantB.hitPoints -= combatantA.atkPoints - combatantB.defPoints;
		inProgress = combatantA.hitPoints > 0 && combatantB.hitPoints > 0;
	}
	std::cout << "the battles is over!";
	if (combatantA.hitPoints > 0) 
	{
		std::cout << "Player has emerged victorious!" << std::endl;
	}
	else if (combatantB.hitPoints > 0) 
	{
		std::cout << "zombey has emerged victorious!" << std::endl;
	}
	else
	{
		std::cout << "all fighters have parished";
	}
}
