#include "student.h"
#include <iostream>

void printallStudentinfow(Student student)
{
	std::cout << "stuID: " << student.studentId << std::endl;
	std::cout << " enr: " << student.course << std::endl;
	std::cout << " exam: " << student.numScoreLastExam << std::endl;
}

float avrTestScortes(Student section[], int size)
{
	return 0.0f;
}

float medTestscores(Student section[], int size)
{
	while (true)
	{
		bool isSorted = true;

		for (int i = 0; i < size - 1; ++i)
		{
			if (section[i].numScoreLastExam < section[i + 1].numScoreLastExam)
			{
				Student temp = section[i];
				section[i] = section[i + 1];
				section[i + 1] = temp;
				isSorted = false;
			}
		}

		if (isSorted)
		{
			break;
		}
	}
	if (size % 2 == 0)
	{
		int midIdx = size / 2;
		float lhs = section[midIdx - 1].numScoreLastExam;
		float rhs = section[midIdx].numScoreLastExam;
		return (lhs + rhs) / 2.0f;
	}
	else
	{
		return section[size / 2].numScoreLastExam;
	}
}

float enrollmentcount(Student section[], int size, int course)
{
	int tally = 0;
	for ( int i = 0; i< size;++i)
	{
		if (section[i].course == course)
		{
			tally++;
		}
		return tally;
	}
}
