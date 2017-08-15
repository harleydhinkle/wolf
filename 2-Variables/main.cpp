#include<iostream>
int main() 
{  
	// The Right Tool for the Job)

	int num;
	float num2;     

	int age3;
	int bullet_count;
	float dog_years;
	int qty;
	float shield_value;
	float defense_matrix_cool_down;
	int red_armor_value;
	float red_armor_ratio;
	int happiness;
	int gandhi_aggression;

	// Fun Facts for Your Age)

	int age2 = 0;
	int months;

	// <Your work can go here.>
	std::cin >> age2;
	months = age2 *12;
	std::cout << "Howdy! You are " << age2 << " years old!" << std::endl;
	std::cout << "youve been alive for at lest " << months<< " months";
	// Number Swap)
	int x2 = 13;
	int y2 = 24;
	int tamp = x2;
	std::cin >> x2;
	std::cin >> y2;
	tamp = x2;
	x2 = y2;
	y2 = tamp;
	


	std::cout << "Number Swap)" << std::endl;
	std::cout << "x is " << x2 << std::endl;
	std::cout << "y is " << y2 << std::endl;


	// Average of Five)

	float a, b, c, d, e;    // Modify these variables below.
	float avg;              // Modify this variable below.
	avg = a = b = c = d = e = 0.0f; // Initialize all to zero.
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;
	avg = (a + b + c + d + e) / 5.0f;

	std::cout << "Average of Five)" << std::endl;
	std::cout << a << "," << b << "," << c << "," << d << "," << e << std::endl;
	std::cout << "avg: " << avg << std::endl;

	// Area of a Rectangle)
	float rectWidth = 0.0f;  
	float rectHeight = 0.0f; 
	float rectArea = 0.0f;   
	std::cout << "plase endter in width" << std::endl;
	std::cin >> rectWidth;
	std::cout << "plase endter in height" << std::endl;
	std::cin >> rectHeight;

	rectArea = rectWidth * rectHeight;

	std::cout << "Area of a Rectangle)" << std::endl;
	std::cout << "H: " << rectHeight << " , W: " << rectWidth << std::endl;
	std::cout << "Area: " << rectArea << std::endl;


	// Celsius to Fahrenheit)

	float degCelsius = 78.0f;
	float degFahrenheit = 0.0f;
	std::cout << degCelsius;
	degFahrenheit = degCelsius * (9.0f / 5.0f) + 32;




	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius:    " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;
	std::cin >> degCelsius;
	degFahrenheit = degCelsius * (9 / 5) + 32;
	std::cout << "Celsius to Fahrenheit)" << std::endl;
	std::cout << "Celsius:    " << degCelsius << std::endl;
	std::cout << "Fahrenheit: " << degFahrenheit << std::endl;
	
	// F)

	float y = 13;

	y = y / 2;

	std::cout << "F)" << y << std::endl;
	
	// E)

	int x = 13;

	x = x / 2;

	std::cout << "E) " << x << std::endl;
	
	// D)

	int numberD = 1;
	int somethingD = 3;

	numberD = somethingD;

	std::cout << "D) " << somethingD << std::endl;
	
	// C)

	int numberC = 3;
	numberC = 7;
	numberC = 1;

	int somethingC = 23;
	somethingC = 21;

	numberC = somethingC;

	std::cout << "C) " << numberC << std::endl;
	
	// B)

	int numberB = 10;
	numberB = 9;

	int thingB = 55;
	thingB = 22;

	std::cout << "B) " << numberB << std::endl;
	
	// A)

	int numberA = 5;

	numberA = 9;
	numberA = 11;
	numberA = 14;

	std::cout << "A) " << numberA << std::endl;
	int age = 19;

	std::cout << "this is wratten into the code"<<std::endl;
	std::cout << "age" << std::endl;//print a tex literal
	std::cout << age << std::endl;
	
	age = age + 1; //increase the value pf age by one

	std::cout << age << std::endl;

	int first = 5.9;
	int second = 17.4;
	
	int sum = first + second;
	std::cout << first << " plus " << second << " equals " << sum << std::endl;

	float numA = 5.0f;
	float numB = 1.0f;

	float numSum = numA + numB;

	std::cout << numA << " plus " << numB << " equals " << numSum << std::endl;

	int userInput = 0;
	std::cin >> userInput;
	std::cout << "Heres is your number " << userInput << std::endl;

	system("pause");
}