#include "player.h"
#include "battle.h"
#include <iostream>
#include "enemy.h"
#include "defand.h"
#include "heal.h"
int main()
{
	PlayerStates player;
	player.maxheath = 100;
	player.deffenMax;
	player.deffenMax = 30;
	player.attackmax = 20;
	Entity playercho;
	playercho.atk = 105;
	playercho.deffend = 30;
	player.health = 100;
	playercho.heal = 20;
	Entity enemy;
	enemy.atk = 10;
	enemy.deffend = 5;
	enemy.heal = 0;
	enemy.health = 100;
	playercho.health = 100;
	printstates(player);
	fight(playercho,enemy);
	Heal(player);	
	while (true){}//
}