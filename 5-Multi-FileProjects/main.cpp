#include "fun.h"
#include <iostream>
#include "dtgreet.h"
#include "rng.h"
using namespace std;

int main()
{
	cout << "Hello world" << endl;
	cout << sum(1, 1) << endl;
	cout << distance(9, 3, 5, 7) << endl;
	cout << max(5, 7) << endl;
	cout << min(9, 3) << endl;
	cout << clamp(19, 40, 50) << endl;
	dayGreeting(16,8,2017);
	timeGreeting(12,03);
	cout << isLeepyYear(2017) << endl;
	SeedRng (1);
	cout << rng << endl;
	cout << rangRange(15, 30) << endl;
	cout << rngBchance(1) << endl;
	system("pause");
}