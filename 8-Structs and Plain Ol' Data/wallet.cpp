#include "wallet.h"

float calcPiggybankNotes(piggybank piggy)
{
	int cash;
	
	cash = piggy.oneDollar + piggy.twoDollar * 2 + piggy.fiveDollar * 5;
	return cash;
}

float calcPiggybankCoins(piggybank piggy)
{ 
	int coins;
	coins = piggy.quart*.25 + piggy.dimes*.1 + piggy.nicks*.05 + piggy.pennies*.01;
	return coins;
}

float calcPiggybankTotal(piggybank piggy)
{
	int totalCash;
	totalCash = piggy.oneDollar + piggy.twoDollar * 2 + piggy.fiveDollar * 5 + piggy.quart*.25f + piggy.dimes*.1f + piggy.nicks*.05f + piggy.pennies*.01f;
	return totalCash;
}
