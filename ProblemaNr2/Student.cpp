#include "Student.h"

void Student::Set_Nume_Student(const char* s)
{

	strcpy(this->nume, s);
}

char* Student::Get_Nume_Student()
{

	return this->nume;
}


void Student::Set_Nota_Mate(float grade)
{

	if (grade >= 1 && grade <= 10)
		this->n_mate = grade;

}

float Student::Get_Nota_Mate()
{
	return this->n_mate;

}

void Student::Set_Nota_Eng(float grade)
{

	if (grade >= 1 && grade <= 10)
		this->n_eng = grade;

}

float Student::Get_Nota_Eng()
{
	return this->n_eng;

}


void Student::Set_Nota_Istorie(float grade)
{

	if (grade >= 1 && grade <= 10)
		this->n_ist = grade;

}

float Student::Get_Nota_Istorie()
{
	return this->n_ist;

}

float Student::Media_Notelor()
{
	this->media = (this->n_mate + this->n_eng + this->n_ist) / 3;
	return media;
}


