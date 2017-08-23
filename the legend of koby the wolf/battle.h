#pragma once
#include "player.h"
#include "battle.h"
#include "defand.h"
#include "heal.h"
struct Entity 
{
	float atk;
	float heal;
	float deffend;
	float health;
};
void fight(Entity Player, Entity Enemy);
void printstates(PlayerStates player);
void Heal(PlayerStates heal);