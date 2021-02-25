#include "Global_Functions.h"

int Compara_Nume(Student st1, Student st2)
{
	char nume1[30], nume2[30];
	int n;
	char* s1;
	char* s2;

	s1 = st1.Get_Nume_Student();

	while(*s1!='\0')
	{	
		n = 0;

		nume1[n] = *s1;
		n++;
		s1++;
	}

	s2 = st2.Get_Nume_Student();

	while (*s2 != '\0')
	{
		n = 0;

		nume2[n] = *s2;
		n++;
		s2++;
	}

	return strcmp(nume1, nume2);
}

int Compara_Note_Mate(Student st1, Student st2)
{
	float n1, n2;

	n1 = st1.Get_Nota_Mate();
	n2 = st2.Get_Nota_Mate();

	if (n1 == n2)
		return 0;
	else if (n1 > n2)
		return 1;
	else
		return -1;
}

int Compara_Note_Eng(Student st1, Student st2)
{
	float n1, n2;

	n1 = st1.Get_Nota_Eng();
	n2 = st2.Get_Nota_Eng();

	if (n1 == n2)
		return 0;
	else if (n1 > n2)
		return 1;
	else
		return -1;
}

int Compara_Note_Istorie(Student st1, Student st2)
{
	float n1, n2;

	n1 = st1.Get_Nota_Istorie();
	n2 = st2.Get_Nota_Istorie();

	if (n1 == n2)
		return 0;
	else if (n1 > n2)
		return 1;
	else
		return -1;
}

int Compara_Medie(Student st1, Student st2)
{
	float m1, m2;

	m1 = st1.Media_Notelor();
	m2 = st2.Media_Notelor();

	if (m1 == m2)
		return 0;
	else if (m1 > m2)
		return 1;
	else
		return -1;
}