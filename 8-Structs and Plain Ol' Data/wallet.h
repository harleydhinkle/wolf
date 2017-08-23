#pragma once

 struct piggybank
{
	int oneDollar;
	int twoDollar;
	int fiveDollar;
	int quart;
	int dimes;
	int nicks;
	int pennies;
 };
// Returns the total monetary value of all dollar bills.
 float calcPiggybankNotes(piggybank piggy);

// Returns the total monetary value of all coins.
float calcPiggybankCoins(piggybank piggy);
// Returns the total monetary value of the piggybank's contents.
float calcPiggybankTotal(piggybank piggy);