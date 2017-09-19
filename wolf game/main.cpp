#include "story.h"
#include <iostream>
#include <fstream>
#include<string>
using std::fstream;
using std::string;
int main() 
{
	int day = 1;
	int Checkpoint = 0;

	fstream save;
	save.open("saveGame.txt", std::ios::in);
	if (save.fail())
	{
		std::cout << "Something went wrong." << std::endl;
		return -1;
	}
	string buf;
	getline(save, buf);

	if (buf != "")
	{
		Checkpoint = std::stoi(buf);
	}

	save.close();

	if (Checkpoint == 0) 
	{
		intro(day);
	}
	else if (Checkpoint == 1) 
	{
		chapter1();
	}
	else if (Checkpoint == 2) 
	{
		chapter2();
	}

	/*fstream save;
	save.open("saveGame.txt", std::ios::out | std::ios::in);
	if (save.fail())
	{
		std::cout << "Something went wrong." << std::endl;
		return -1;
	}

	save.close();*/
	
	system("pause");

}