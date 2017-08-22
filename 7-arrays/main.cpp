#include <iostream>
int sumNumbers(int numbers[], int size) 
{
	for (int i = 0; i < size; i++)
	{
		numbers = numbers + size;
		std::cout << numbers[i] << std::endl;
		return i;
	}
		return -1;
}
void printNumbers(int nums[], int size) 
{
	for (int i = 0; i < size; i++) 
	{
		std::cout << nums[i] << std::endl;
	}
}
void printNumbers2(int numbers[], int size)
{
	for (int i = 0; i < size; i++)
	{
		std::cout << numbers[i] << std::endl;

	}
}
int findIndex(int numbers[], int size, int value) 
{
	for (int i = 0; i < size; i++) 
	{
		return i;
	}
	return -1;

}
bool arrayunqueness(int number[], int size) 
{
	for (int i = 0; i < size; i++)
	{
		if (true)
		{
			std::cout << "yes" << std::endl;
			return true;
		}

		else
		{
			std::cout << "no" << std::endl;
		}
	}
	return false;
}
int main()
{
	//declare and define integers arrays
	//int numbers[3];
	//indiviidually inital
	//numbers[0] = 0;
	//numbers[1] = 0;
	//numbers[2] = 0;
	//numbers[3] = 0;
	//numbers[4] = 0;s


	
	//for (int i = 0; i < 5; ++i) 
	//{
	//	numbers[i] = 0;
	//}

	//int nummbersList[]{ 0,0,0,0,0 };
	//accessing arrays using indicies
	//numbers[0] = 5;
	//std::cout << numbers[0] << std::endl;
	//for (int i = 0; i < 5; ++i) 
	// {
		//std::cout << numbers[i] << std::endl;
	//}
	//for (int i = 0; i < 5; i+= 2)
	//{
		//numbers[i] = 1;
	//}
	//iterating over and array
	//std::cout << "test func" << std::endl;
	//printNumbers(numbers, 5);
	int numbers[]{ 0,1,2,3};
	int numbers2[]{ 0,1,2,3, };
	printNumbers2(numbers, 4);
	sumNumbers(numbers2, 4);
	int number3[]{ 4,8,5,9 };
	int numbers4[]{ 1,2,5,7 };
	
	//open
	//1.
	findIndex(number3, 4, 5);
	//2.
	arrayunqueness(numbers4, 4);


	system("pause");
}