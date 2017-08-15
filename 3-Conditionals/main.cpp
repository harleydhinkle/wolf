#include <iostream>

int main()
{
	bool isHappy = true;
	if (isHappy)
	{
		std::cout << "i am totes happy" << std::endl;
	}
	else
	{
		std::cout << "i am much o sadz</3" << std::endl;
	}
	std::cout << "how happy r you" << std::endl;
	int happiness = 80;
	std::cin >> happiness;

	if (happiness > 75)
	{
		std::cout << "you arre very happy! :D" << std::endl;
	}
	else if (happiness > 30)
	{
		std::cout << "you are reather content. :o" << std::endl;
	}
	else if (happiness > 0)
	{
		std::cout << "have hope, friend :0" << std::endl;
	}
	else
	{
		std::cout << "WOE IS YOU. SAD TIME. :(" << std::endl;

	}
	//2. evauate the following

	//A
	int numberA = 15;
	if (numberA > 10)
	{
		numberA = numberA * 2;
	}
	std::cout << "A) " << numberA << std::endl;
	//B) 
	int numberB = 15;
	if (numberB < 15)
	{
		numberB = numberB * 3;
	}
	std::cout << "B) " << numberB << std::endl;
	//C)
	int numberC = 12;
	if (numberC == 12)
	{
		numberC = numberC * 2;
	}
	std::cout << "C) " << numberC << std::endl;
	//D)
	int numberD = 12;
	if (numberD <= 12)
	{
		numberD = numberD * 0;
	}
	std::cout << "D) " << numberD << std::endl;
	//E)
	int numberE = 14;
	if (numberE >= 12)
	{
		numberE *= 4;
	}
	std::cout << "E) " << numberE << std::endl;
	//F)
	int numberF = 6;
	if (numberF == 0)
	{
		numberF = 0;
	}
	else if (numberF > 10)
	{
		numberF = 1;
	}
	std::cout << "F) " << numberF << std::endl;
	//G)
	int numberG = 6;
	if (numberG < 0)
	{
		numberG = 0;
	}
	else if (numberG < 2)
	{
		numberG = 1;
	}
	else if (numberG < 5)
	{
		numberG = 2;
	}
	else
	{
		numberG = 3;
	}
	std::cout << "G) " << numberG << std::endl;
	//2. Number Judging
	int numberH = -1;
	std::cout << "pick a number 1 - 100" << std::endl;
	std::cin >> numberH;
	std::cout << numberH << " ";
	if (numberH > 50)
	{
		std::cout << "wow that numbers way to high " << std::endl;
	}
	else if (numberH < 50)
	{
		std::cout << "wow thats way to little " << std::endl;
	}
	else if (numberH == 50)
	{
		std::cout << "that is the balanced" << std::endl;
	}
	std::cout << "now plz enter you age" << std::endl;
	int age = -1;
	std::cin >> age;
	if (age < 18)
	{
		std::cout << "you r a minner" << std::endl;
	}
	else if (age >= 18)
	{
		std::cout << "you r an adult" << std::endl;
	}
	if (age >= 50)
	{
		std::cout << "you can apply for aarp" << std::endl;
	}
	if (age >= 65)
	{
		std::cout << "you are eligible for retirement benefits" << std::endl;
	}
	std::cout << "now plz pick three number" << std::endl;
	int a, b, c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a < b&&c)
	{
		std::cout << "this is the smilist number " << a << std::endl;
	}
	else if (b < a&&c)
	{
		std::cout << "this is the smilist number " << b << std::endl;
	}
	else if (c < b&&a)
	{
		std::cout << "this is the smilist number " << c << std::endl;
	}
	std::cout << "now plz pick a whole number" << std::endl;
	int k;
	std::cin >> k;
	if ((k%2)==0) 
	{
		std::cout << "your number is even" << std::endl;
	}
	else
	{
		std::cout << "your number is odd" << std::endl;
	}
	int m;
	std::cin >> m;
	if (m < 15) 
	{
		m = 15;
		std::cout << "your number was chage becuse it was smiler than 15 so your number was set as " << m << std::endl;
	}
	else if (m > 30) 
	{
		m = 30;
		std::cout << "your number was chage becuse it was bigger than 30 so your number was set as " << m << std::endl;
	}
	else
	{
		std::cout << "your number was betwwn 30 and 15so your number is " << m << std::endl;
	}
	int cookies = 0;
	std::cout << "how many cookies do you want" << std::endl;
	std::cin >> cookies;
	cookies = cookies / 23;
	cookies = cookies * 23;
	if (cookies >= 23)
	{
		std::cout << "you order this amont of cookies "<<cookies << std::endl;
	}
	else if (cookies == 0)
	{
		std::cout << "you couldnt buy enuffe cookies" << std::endl;
	}
	std::cout << "how main sketchbooks do you want" << std::endl;
	int min = 9;
	int max = 30;
	int sketchbooks = 1;
	std::cin >> sketchbooks;
	sketchbooks = sketchbooks * 3;
	if (sketchbooks < min ||sketchbooks > max) 
	{
		std::cout << "you didnt buy enuffe or to many sketchboooks" << std::endl;
	}
	else 
	{
		std::cout << "you bote this many sketchbooks " << sketchbooks << std::endl;
	}
	int y;
	int n;
	std::cin >> y;
	std::cin >> n;
	if (!y || !n) 
	{
		std::cout << "you enterd a wrong batton" << std::endl;
	}

	system("pause");
}