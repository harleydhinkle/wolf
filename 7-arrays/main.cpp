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
		if (numbers[i] == value) {
			return i;
		}
	}
	return -1;

}
//bool arrayunqueness(int number[], int size) 
//{
	//for (int i = 0; i < size; i++)
	//{
		//for (int j= 0; j < size; j++)
		//{
			//if (i!= j && number[j])
			//}		
	//}
	//return false;
//}
int largestnumber(int number[], int size)
{
	int largest = INT_MIN;
	for (int i = 0; i < size; ++i) 
	{
		if (number[i] > largest) 
		{
			largest = number[i];
		}
	}
	return largest;
}
void reverse(int numbers[],  int size)
{
	for (int i = 0; i < size / 2; ++i)
	{
		int temp = numbers[i];
		numbers[i] = numbers[size - 1 - i];
		numbers[size - 1- i] = temp;
	}
}
void sortAscend(int numbers[], int size) 
{
	while (true){
		bool isSorted = true;

		for (int i = 0; i < size - 1; ++i) {
			for (int i = 0; i < size - 1; ++i)
			{
				if (numbers[i] > numbers[i + 1])
				{
					int temp = numbers[i];
					numbers[i] = numbers[i + 1];
					numbers[i + 1] = temp;
					isSorted = false;
				}
				if(isSorted)
				{
					break;
				}
			}
		}
	}
}
void sortDescend(int numbers[], int size)
{
	while (true)
	{
		bool isSorted = true;

		for (int i = 0; i < size - 1; ++i) {
			for (int i = 0; i < size - 1; ++i)
			{
				if (numbers[i] < numbers[i + 1])
				{
					int temp = numbers[i];
					numbers[i] = numbers[i + 1];
					numbers[i + 1] = temp;
					isSorted = false;
				}
				if (isSorted)
				{
					break;
				}
			}
		}

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
	largestnumber(numbers, 4);
	//open
	//1.
	findIndex(numbers, 4, 5);
	printNumbers2(numbers, 4);
	//2.
	//arrayunqueness(numbers4, 4);
	//3.
	reverse(numbers, 4);
	printNumbers2(numbers, 4);
	//4.

	//5.

	system("pause");
}