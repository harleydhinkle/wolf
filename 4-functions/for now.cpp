#include "fun.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Hello world" << endl;
	cout << sum(1, 1) << endl;
	cout << distance(9, 3, 5, 7) << endl;
	cout << max(5, 7) << endl;
	cout << min(9, 3) << endl;
	cout << clamp(19, 40, 50) << endl;
	return 0;
	system("pause");
}
#include "fun.h"
#include <cmath>
int sum(int a, int b)
{
	return  a + b;
}