#include <iostream>
#include <cstring>
struct Player 
{
	char name[80];
};
void addStrings(char dst[], int size, char src1[], char src2[]) 
{
	//copies data from src1 into the dst buffer
	strcpy_s(dst, size, src1);
	//concatenates data from src2 into dst buffer
	strcpy_s(dst, size, src1);

}
int main() 
{
	//definition
	char buffer[80];
	// intation
	char cstring[] = "dinosurs are cool!";
	char buffer2[80] = { 0 };
	//assigent
	strcpy_s(buffer, "string");
	//length
	int length = strlen(buffer);
	//concatenation
	strcat_s(buffer,80, cstring);

	//-1,0,1
	int result = strcmp(buffer, cstring);
	//closed
	//1.
	char name[80] = {0};
	std::cout << "enter your name" << std::endl;
	std::cin >> name;
	std::cout << "hi " << name << std::endl;
	//2.
	std::cout << "enter faverity cother" << std::endl;
	std::cin >> name;
	if (strcmp(name, "blue") == 0)
		std::cout << "sky is blue" << std::endl;
	else if (strcmp(name,"green")== 0)
		std::cout << "gress is green" << std::endl;
	else if (strcmp(name, "red") == 0)
		std::cout << "apples are red" << std::endl;
	//3.
	char buffer[80] = { 0 };
	int j = 0;
	std::cin.ignore(80, '\n');
	std::cin.getline(name, 80);
	std::cout << "enter a line with a whitespace" << std::endl;
	for (int i = 0; i < strlen(name) + 1; ++i) 
	{
		if (name[i] != ' ' &&name[i] != '\t' && name[i] != '\n')
			buffer[j++] = name[i];
	}
	std::cout << buffer << std::endl;
	//open
	//1.

	while (true) {};
}
void doSomething(int &x) 
{
	x += 10;
}