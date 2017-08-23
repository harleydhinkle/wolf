#include "person.h"
#include <iostream>

void describePerson(Person person)
{
	std::cout << "Age: " << person.age << std::endl;
	std::cout << "wgt : " << person.weight << std::endl;
}
void lavelUp(Person person)
{
	person.age = person.age + 1;
}