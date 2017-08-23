#include "person.h"
#include "wallet.h"
#include "student.h"
#include "vector2d.h"
#include "battle.h"

int main()
{
	piggybank bank{ 2,2,1,4,10,20,95 };
	float coins = calcPiggybankCoins(bank);
	float notes = calcPiggybankNotes(bank);
	float total = calcPiggybankTotal(bank);
	Student all[6];
	all[0].studentId = 12006;
	all[0].course = 1;
	all[0].numScoreLastExam = 45;
	all[1].studentId = 12007;
	all[1].course = 2;
	all[1].numScoreLastExam = 29; 
	all[2].studentId = 12008;
	all[2].course = 2;
	all[2].numScoreLastExam = 31;
	all[3].studentId = 12009;
	all[3].course = 1;
	all[3].numScoreLastExam = 40;
	all[4].studentId = 12010;
	all[4].course = 2;
	all[4].numScoreLastExam = 47;
	all[5].studentId = 12011;
	all[5].course = 2;
	all[5].numScoreLastExam = 28;
	Person me;
	me.age = 19;
	me.weight = 124.0f;
	me.charisma = 10;
	me.strength = 300;
	me.dexterity = 50;
	me.cash = 66;
	describePerson(me);
	lavelUp(me);
	//closed

	//open 
	printallStudentinfow(all[0]);
	float avg = avrTestScortes(all, 6);
	float med = medTestscores(all, 6);
	int courseA = enrollmentcount(all, 6, 1);
	int courseB = enrollmentcount(all, 6, 2);
	vetior2d a = { 0,0 };
	vetior2d b = { 0,1 };
	vetior2d vSum = sum(a, b);
	vetior2d vDiif = diff(a, b);
	float vDist = dist(a, b);
	Entity fighterA = { 20,8,1 };
	Entity fighterB = { 30,7,2 };
	battle(fighterA, fighterB);


	while (true){}// 
	
}
