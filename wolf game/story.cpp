#include "story.h"
#include <iostream>
#include <windows.h> 
using std::cout; 
using std::endl;
using std::cin;
void ColorPicker(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}
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
	ColorPicker(2);
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
			std::cout << "1: to keep looking \n2:to go to the forest " << std::endl;
			std::cin >> userinput;
			if (userinput == 1) 
			{
				std::cout << "you deside to look some more in the grass lands to see if there any elk in the area" << std::endl;
				std::cout << "you can go three deacsons north south and west " << std::endl;
				std::cout << "1: to go north \n2:to go south \n3:west" << std::endl;
				std::cin >> userinput;
				if (userinput == 1)
				{
					cout << "so you desided to go north" << endl;
					cout << "you walk north so  you can see if any elk r that way" << endl;
					cout << "you see anther hunter and his pet killer bunny you can ether fight him and his pet or snick around tham" << endl;
					std::cout << "1: to  fight \n2:to sinck " << std::endl;
					std::cin >> userinput;
					if (userinput == 1)
					{

					}
					else if (userinput == 2) 
					{
						cout << "you snick around tham somehow" << endl;
						cout << "you have to choses you can go to the forest or go back" << endl;
						std::cout << "1: go to forest \n2:go back" << std::endl;
						cin >> userinput;
						if (userinput == 1)
						{
							cout << "you desided to go to the forest" << endl;
						}
						else if (userinput == 2)
						{
							cout << "you deside to go back and look to go the other dracsons" << endl;
							cout << "you have three other choses you can go south west or go to the forest " << endl;
							std::cout << "1: to go south \n2:to go wast \n3:go to the forest" << std::endl;
							std::cin >> userinput;
							if (userinput == 1) 
							{
								cout << " you deside to go south" << endl;
								cout << "you walk south so you can see if any elk r that way" << endl;
								cout << "you walk in the south dracson and you see the hunter you show befor he seems to be more alert than the last time" << endl;
								cout << " you still have to opchise you can fight or snick" << endl;
								cout << "1: to  fight \n2:to sinck " << endl;
								cin >> userinput;
								if (userinput == 1)
								{

								}
								else if (userinput == 2);
								{
									cout << "you snick around him but it was really close" << endl;
									cout << "you have to choses you can go to the forest or go back" << endl;
									std::cout << "1: go to forest \n2:go back" << std::endl;
									if (userinput == 1)
									{
										cout << "you desided to go to the forest" << endl;
									}
									else if(userinput == 2)
									{
										cout << "you deside to go back" << endl;
										cout << "you only have tochoes now sense you wint to north and south you can go west or go to the forest" << endl;
										cout << "1:go west \n2:go to the forest" << endl;
										cin >> userinput;
										if (userinput == 1) 
										{
											cout << "you deside to go wast to chack on your cave" << endl;
											cout << "you see both the hunters you show befor you have to choses you can do fight tham or make tham chase you so your pack gets away" << endl;
											cout << "1:fight tham \n2:make tham chase you" << endl;
											cin >> userinput;
											if (userinput == 1)
											{

											}
											else if (userinput == 2)
											{
												cout << " you desided to make tham chass you so you run up to tham a growled they trurnd around a show you you started runing and they ran after you" << endl;
												cout << " meen will your pack exits the cave and goes and hides you run into the woulds and hides be hind a tree and the hunters run past you" << endl;
												cout << "you are now in the forest you can go north south or east wich one would you like to go" << endl;
												std::cout << "1: to go north \n2:to go south \n3:east" << std::endl;
												std::cin >> userinput;
												if (userinput == 1) 
												{

												}
												else if (userinput == 2) 
												{

												}
												else if (userinput == 3) 
												{

												}
											}
										}
									}

								}
							}
							else if (userinput == 2)
							{
								cout << "you desided to go wast" << endl;
								cout << "you see one of the huiters you shaw be for so you deside to get him in the cave and have you pack kill the hunter" << endl;
								cout << "you make the hunter chass you into the  the cave wer e the other pack mabers kill him" << endl;
								cout << "now you ownly have it two more opchise" << endl;
								cout << "you can go to the forest or south" << endl;

							}
							else if (userinput == 3)
							{
								cout << "you deside to go to the forest" << endl;
							}

						}
					}
				
				}
				else if (userinput == 2)
				{
					cout << "so you deside to go south" << endl;
					cout << "you walk south so you can see if any elk r that way" << endl;
					cout << "you walk in the south dracson and you see the hunter you show befor he seems to be more alert than the last time" << endl;
					cout << " you still have to opchise you can fight or snick" << endl;
					cout << "1: to  fight \n2:to sinck " << endl;
					cin >> userinput;
					if (userinput == 1) 
					{

					}
					else if (userinput == 2);
					{
						cout << "you snick around him but it was really close" << endl;
						cout << "you have to choses you can go to the forest or go back" << endl;
						std::cout << "1: go to forest \n2:go back" << std::endl;

						cin >> userinput;
						if (userinput == 1) 
						{
							cout << "you desided to go to the forest" << endl;
						}
						else if (userinput == 2)
						{
							cout << "you deside to go back and look to go the other dracsons" << endl;
							cout << "you have three other choses you can go north west or go to the forest " << endl;
							cout << "1:go north\2:go west\3:go forest" << endl;
							if (userinput == 1)
							{
								cout << "so you desided to go north" << endl;
								cout << "you walk north so  you can see if any elk r that way" << endl;
								cout << "you see anther hunter and his pet killer bunny you can ether fight him and his pet or snick around tham" << endl;
								std::cout << "1: to  fight \n2:to sinck " << std::endl;
								std::cin >> userinput;
								if (userinput == 1)
								{

								}
								else if (userinput == 2)
								{
									cout << "you snick around tham somehow" << endl;
									cout << "you have to choses you can go to the forest or go back" << endl;
									std::cout << "1: go to forest \n2:go back" << std::endl;
									cin >> userinput;
									if (userinput == 1)
									{
										cout << "you desided to go to the forest" << endl;
									}
									else if (userinput == 2)
									{
										cout << "you deside to go back and look to go the other dracsons" << endl;
										cout << "you go back but now two opcinse sanse you all ready wint north and south you can go wast or to the forest" << endl;
										cout << "1:go west \n2:go to the forest" << endl;
										cin >> userinput;
										if (userinput == 1)
										{
											cout << "you deside to go wast to chack on your cave" << endl;
											cout << "you see both the hunters you show befor you have to choses you can do fight tham or make tham chase you so your pack gets away" << endl;
											cout << "1:fight tham \n2:make tham chase you" << endl;
											cin >> userinput;
											if (userinput == 1)
											{

											}
											else if (userinput == 2)
											{
												cout << " you desided to make tham chass you so you run up to tham a growled they trurnd around a show you you started runing and they ran after you" << endl;
												cout << " meen will your pack exits the cave and goes and hides you run into the woulds and hides be hind a tree and the hunters run past you" << endl;
												cout << "you are now in the forest you can go north south or east wich one would you like to go" << endl;
												std::cout << "1: to go north \n2:to go south \n3:east" << std::endl;
												std::cin >> userinput;
											}
										}
										else if (userinput == 2)
										{
											cout << "you deside to go to the forest" << endl;
										}
									}
								}
							}
							else if (userinput == 2)
							{
								cout << "you deside to go wast" << endl;
							}
							else if (userinput == 3)
							{
								cout << "you deside to go to the forest" << endl;
							}

						}
					}
				}
				else if (userinput == 3)
				{
					cout << "so you desided to go west" << endl;
					cout << "you walk west so see if any thinks around your cave" << endl;
					cout << "you see nothing around your cave so you have two choeses you can go " << endl;
					cout << "1:go to the forest\n2:go back" << endl;
					cin >> userinput;
					if (userinput == 1) 
					{
						cout << "you deside to go to the forest" << endl;
					}
					else if(userinput == 2)
					{
						cout << "you deside to go back" << endl;
					}
				}
			}
			else if (userinput == 2) 
			{
				std::cout << "you deside to go start to the forest and nbot chack again" << std::endl;
				std::cout << "you walk into the forest" << endl;
				std::cout << "so you have three differnt opchis to go in the forist you can go north south and east" << std::endl;
				std::cout << "1: to go north \n2:to go south \n3:east" << std::endl;
				std::cin >> userinput;
				if (userinput == 1) 
				{
					std::cout << "so you desied to go north" << std::endl;
					cout << "you walk north so see if any elk r that way" << endl;
				}
				else if (userinput == 2)
				{
					cout << "so you deside to go south" << std::endl;
					cout << "you walk south so see if any elk r that way" << endl;
				}
				else if (userinput == 3) 
				{
					cout << "so you deside to go east" << std::endl;
					cout << "you walk east so see if any elk r that way" << endl;
				}

			}
		}
	}
	else if (userinput == 2)
	{
		std::cout << "you desied to go to the forest first" << std::endl;
	}
}
