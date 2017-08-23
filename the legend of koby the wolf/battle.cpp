#include "battle.h"
#include "defand.h"
#include "player.h"
#include "heal.h"
#include <iostream>

void fight(Entity Player, Entity Enemy)
{
	bool inProgress = true;
	while (inProgress)
	{


		std::cout << "select 1 to attck" << std::endl;
		std::cout << "select 2 to deffend" << std::endl;
		std::cout << "select 3 to heal" << std::endl;
		int cho = -1;
		std::cin >> cho;
		if (cho == 1)
		{
			Enemy.health -= Player.atk - Enemy.deffend;
			float damage = Player.atk - Enemy.deffend;
			if(damage > 0 )
			{
				Enemy.health -= damage;
			}
			std::cout << Enemy.health << std::endl;
		}
		if (cho == 2)
		{
			Player.deffend;
		}
		if (cho == 3)
		{
			Player.heal;
		}
		inProgress = Player.health > 0 && Enemy.health > 0;
	}
	if (Player.health > 0)
	{
		std::cout << "you win" << std::endl;
	}
}
void states(PlayerStates state)
{
	state.maxheath = 100;
	state.deffenMax = 30;
	state.attackmax = 20;
}
void printstates(PlayerStates player) 
{
	std::cout << " your max heath is:" << player.maxheath << std::endl;
	std::cout << " your max deffens is:" << player.deffenMax << std::endl;
	std::cout << " your max deffens is:" << player.attackmax << std::endl;
}
void deff(deffend deff) 
{
	
}
void Heal(PlayerStates heal)
{
	heal.health += heal.maxheath /2;
}