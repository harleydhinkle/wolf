#include "story.h"
#include <iostream>
#include <fstream>
#include<string>
#include <windows.h>
using std::fstream;
using std::string;
using std::cout;
using std::endl;
using std::cin;
int main() 
{
	int day = 1;
	int Checkpoint = 0;

	fstream save;
	save.open("saveGame.txt", std::ios::in);
	if (save.fail())
	{
		save.open("saveGame.txt", std::ios::out);
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
		cout << "lest time ine the woods you desided to go get food" << endl;
		chapter1();
		
	}
	else if (Checkpoint == 2) 
	{
		ColorPicker(2);
		cout << "lest time you choses to have the hunter chase you and go around one of the hunters /n/ you contue your advacher in other wolf pack tartory" << endl;
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