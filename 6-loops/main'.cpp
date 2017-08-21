#include <iostream>
#include <cstdlib>
void printXY(int x, int y) 
{
	for (int i = x; i <= y; ++i) 
	{
		std::cout << i << std::endl;
	}
}
int promptLargest(int qtyRequested) 
{
	int largest = INT_MIN;
	for (int i = 0; i < qtyRequested; ++i) 
	{
		std::cout << "num please" << std::endl;
		int input = 0;
		std::cin >> input;
		if (input > largest) 
		{
			largest = input;
		}
	}
	return largest;
}
int promptSmallest(int qtyRequested)
{
	int smallest = INT_MAX;
	for (int i = 0; i < qtyRequested; ++i)
	{
		std::cout << "num please" << std::endl;
		int input = 0;
		std::cin >> input;
		if (input < smallest)
		{
			smallest = input;
		}
	}
	return smallest;
}
void EvenOrOdd(int start, int end) 
{
	for (int i = start; i <= end; ++i) 
	{
		if (i % 2 == 0) 
		{
			std::cout << "EVEN" << std::endl;
		}
		else 
		{
			std::cout << "odd" << std::endl;
		}
	}

}
void fizzBuzz(int start, int end) 
{
	for (int i = start; i <= end; ++i) 
	{
		if (i % 3 == 0) 
		{
			std::cout << "fizz";
		}if (i % 5 == 0)
		{
			std::cout << "fizz";
		}
	}
}
void gridGen(int width, int height) 
{
	for (int i = 0; i < height; ++i) 
	{
		for (int j = 0; j < width; ++j) 
		{
			std::cout << "X";
		}
		std::cout << "\n";
	}
}
void guessTheNumber(int lower, int upper, int tryCount) 
{
	int secret = rand() % (upper - lower) + lower;
	bool success = false;
	for (int i = -0; i < tryCount; ++i) 
	{
		int input = 0;
		std::cout << "make a guess" << std::endl;
		std::cin >> input;
		if (input < secret) 
		{
			std::cout << "to high" << std::endl;
		}
		else if (input < secret) 
		{
			std::cout << "two low" << std::endl;
		}
		else
		{
			success = true;
			break;
		}
		if (success) 
		{
			std::cout << "ya did it no bamboozle!!!" << std::endl;
		}
		else
		{
			std::cout << "you lost" << std::endl;
		}
	}
}
int main()
{
	//while
	int iter = 0;
	while (iter < 11)
	{
		std::cout << iter << std::endl;
		iter++;
	}
	//for 
	for (int i = 0; i < 11; ++i)
	{
		std::cout << i << std::endl;
	}

	//do-whille
	int j = 0;
	do
	{
		std::cout << j << std::endl;
		++j;
	} while (j < 11);
	//simple intput validation
	int userInput = -1;
	do
	{
		std::cout << "give me a number between 1 and 5 " << std::endl;
		std::cin >> userInput;
	} while (userInput < 1 || userInput> 5);
	std::cout << "yay" << std::endl;
	for (int i = 0; i <= 100; ++i)
	{
		std::cout << i << std::endl;
	}
	for (int i = 100; i > 0; --i)
	{
		std::cout << i << std::endl;
	}
	for (int i = 1995; i <= 2017; ++i)
	{
		std::cout << i << std::endl;
	}
	int userPick = -1;

	do
	{
		std::cout << "howdy whats your favorite postive numbers please answe one at a time" << std::endl;
		std::cout << "whats your first number" << std::endl;
		std::cin >> userPick;
		std::cout << ">" << userPick << std::endl;
	} while (userPick <= 0);
	std::cout << "ok your first number " << userPick << std::endl;
	int userPick2 = -1;
	do
	{
		std::cout << "whats your second number" << std::endl;
		std::cin >> userPick2;
		std::cout << ">" << userPick2 << std::endl;
	} while (userPick2 <= 0);
	std::cout << "ok your faveites have been " << userPick << " and " << userPick2 << std::endl;
	int userPick3 = -1;
	do
	{
		std::cout << "whats your third number" << std::endl;
		std::cin >> userPick3;
		std::cout << ">" << userPick3 << std::endl;
	} while (userPick3 <= 0);
	std::cout << "Okay, your favorite numbers are " << userPick << " , " << userPick2 << " and " << userPick3 << std::endl;
	//open 
	//1.
	printXY(1, 3);
	//2.
	std::cout << promptLargest(3) << std::endl;
	//3.
	std::cout << promptSmallest(3) << std::endl;
	//4.
	EvenOrOdd(1,2);
	//5.
	fizzBuzz(1, 4);
	//6.
	gridGen(1, 4);
	//7.
	guessTheNumber(1, 2, 3);

	system("pause");
}