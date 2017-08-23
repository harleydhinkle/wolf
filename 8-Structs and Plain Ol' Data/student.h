#pragma once

struct Student 
{
	int studentId;
	int course;
	int numScoreLastExam;
};
void printallStudentinfow(Student student);
float avrTestScortes(Student section[], int size); 
float medTestscores(Student section[], int size);
float enrollmentcount(Student section[], int size,int course);