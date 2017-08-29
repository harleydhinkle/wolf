#include "story.h"
#include <iostream>
void printswich(int DayOutCome , int day) 
{
	switch (DayOutCome)
	{
	case 0:
		std::cout << "it is day:" << day << " you wake up in your cave one of your pack mambers tell you the packs out of food" << std::endl;
		break;
	case 1:
		std::cout << "it is day:" << day << " You fell unconcious and wake up in your cave" << std::endl;
		break;
	case 2:
		std::cout << "day:" << day << " it is the next day the same pack mamber tells you that the pack is more hunger" << std::endl;
		break;
	case 3:
		std::cout << "you deside to go out and find food" << std::endl;
		break;
	case 7:
		std::cout << "you were to lazy and the pack desides to kick you out" << std::endl;
		break;
	}
}
void intro(int day)
{
	
	int userinput;
	int DayOutCome = 0;

	while (day <= 7) {
		printswich(DayOutCome,day);


		//std::cout << "it is day:" << day << " you wake up in your cave one of your pack mambers tell you the packs out of food" << std::endl;
		//std::cout << "you have to choses you can ignore this and go back to sleep or you can get up and start the story" << std::endl;

		std::cout << "1: Go back to sleep \n2: Go Look for food" << std::endl;

		std::cin >> userinput;
		//std::cout << "day:" << day << " it is the next day the same pack mamber tells you that the pack is more hunger" << std::endl;
		if (userinput == 1)
		{
			std::cout << "you deside to go back to sleep and wast a day" << std::endl;
			day = day + 1;
			//std::cout << "day:" << day << " it is the next day the same pack mamber tells you that the pack is more hunger" << std::endl;
			DayOutCome = 2;
			if(day ==7 )
			{
				DayOutCome = 7;
				break;
			}
			continue;
		}
		else
		{
			//std::cout << "you deside to go out and find food" << std::endl;
			chapter1();
			DayOutCome = 3;
			break;
		}

	}
	
	
}
void chapter1()
{
	std::cout << "so you walk out of your cave you have two places you can go first you can go to grass land or forest " << std::endl;
	std::cout << "1:go two grass land \n2: Go to forest" << std::endl;
	int userinput;
	std::cin >> userinput;
	if (userinput == 1)
	{
		std::cout << "you desied to go to grass land first" << std::endl;
		std::cout << "you start walking in the grass land you dont see any food around you start wandering why than you see a hunter with his killer bunny pet you have to choices you can sneeck around the hunter or fight him and his pet one at a time" << std::endl;
		std::cout << "1: to  fight \n2:to sinck " << std::endl;
		std::cin >> userinput;
		if (userinput == 1) 
		{

		}
		else if(userinput == 2)
		{
			std::cout << "you deside to sneck around the hunter and his bunny" << std::endl;
			std::cout << "saprisnly you snack around tham same how" << std::endl;
			std::cout << "do you want to keep look arond the grass lands to make sure you didnt miss any sightings of elk or go to the forest to contue your serech for food in your land" << std::endl;
			std::cout << "1: to keep looking \n2:to go to the forst " << std::endl;
			std::cin >> userinput;
			if (userinput == 1) 
			{
				std::cout << "you deside to keep looking to make sure you didnt miss anythink because your old and your eye sight itsnt so good" << std::endl;
			}
		}
	}
	else if (userinput == 2)
	{
		std::cout << "you desied to go to the forest first" << std::endl;
	}
}
