#include "dtgreet.h"
#include <iostream>
void dayGreeting(int day, int month, int year)
{
	std::cout << "hi the date is " << day << " the month is " << month << " the year is " << year << std::endl;
}
void timeGreeting(int hours, int minutes) 
{
	std::cout << "your late for class the time is " << hours << "the minutes is " << minutes << std::endl;
}
bool isLeepyYear(int year)
{
	if (year % 4 == 0) 
	{
		if (year % 100 == 0) 
		{
			return year % 400 == 0;
		}
		else 
		{
			return true;
		}
	}
	else 
	{
		return false;
	}
}