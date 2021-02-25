#pragma once
#include <iostream>
#include <cstring>
#include<string.h>
#include <iomanip>

using namespace std;

class Student
{
	char nume[30];
	float n_mate, n_eng, n_ist, media;

public:
	void Set_Nume_Student(const char* s);
	void Set_Nota_Mate(float grade);
	void Set_Nota_Eng(float grade);
	void Set_Nota_Istorie(float grade);
	char* Get_Nume_Student();
	float Get_Nota_Mate();
	float Get_Nota_Eng();
	float Get_Nota_Istorie();
	float Media_Notelor();
};

