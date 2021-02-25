#include "Student.h"
#include "Global_Functions.h"

int main()
{
	Student st1, st2;
	float nota1, nota2, nota3, media1, media2, nota4, nota5, nota6;
	char* s1;
	char* s2;
	int cmp1, cmp2, cmp3, cmp4, cmp5;

	//Afisarea datelor despre fiecare student

	cout << "Informatia despre primul student:" << endl;

	cout << endl;

	cout << "Numele si Prenumele: ";
	st1.Set_Nume_Student("Cocieru Ion");
	s1 = st1.Get_Nume_Student();
	cout << s1 << endl;

	cout << "Nota la matematica: ";
	st1.Set_Nota_Mate(5.1);
	nota1 = st1.Get_Nota_Mate();
	cout << nota1 << endl;

	cout << "Nota la engleza: ";
	st1.Set_Nota_Eng(10);
	nota2 = st1.Get_Nota_Eng();
	cout <<nota2 << endl;

	cout << "Nota la istorie: ";
	st1.Set_Nota_Istorie(10);
	nota3 = st1.Get_Nota_Istorie();
	cout << nota3 << endl;

	cout << "Media notelor: ";
	media1=st1.Media_Notelor();
	cout << setprecision(2)<< media1 << endl;

	cout << endl;

	cout << "Informatia despre al doilea student: " << endl;

	cout << endl;

	cout << "Numele si Prenumele: ";
	st2.Set_Nume_Student("Popa Maria");
	s2 = st2.Get_Nume_Student();
	cout << s2 << endl;

	cout << "Nota la matematica: ";
	st2.Set_Nota_Mate(8.25);
	nota4 = st2.Get_Nota_Mate();
	cout << nota4 << endl;

	cout << "Nota la engleza: ";
	st2.Set_Nota_Eng(8.15);
	nota5 = st2.Get_Nota_Eng();
	cout << nota5 << endl;

	cout << "Nota la istorie: ";
	st2.Set_Nota_Istorie(9);
	nota6 = st2.Get_Nota_Istorie();
	cout << nota6 << endl;

	cout << "Media notelor: ";
	media2 = st2.Media_Notelor();
	cout << setprecision(2)<<media2 << endl;

	cout << endl;

	//Apelarea functiilor globale pentru a compara datele despre studenti

	cmp1 = Compara_Nume(st1, st2);

	if (cmp1 == 0)
	{
		cout << "Numele studentilor sunt identice";
	}
	else if (cmp1 == 1)
	{
		cout << "Numele primului student este mai mare";
	}
	else if (cmp1 == -1)
	{
		cout << "Numele celui de-al doilea student este mai mare";
	}

	cmp2 = Compara_Note_Mate(st1, st2);

	if (cmp1 == 0)
	{
		cout << "Notele la matematica sunt egale";
	}
	else if (cmp1 == 1)
	{
		cout << "Nota la matematica a primului student este mai mare";
	}
	else if (cmp1 == -1)
	{
		cout << "Nota la matematica a celui de-al doilea student este mai mare";
	}

	cmp3 = Compara_Note_Eng(st1, st2);

	if (cmp1 == 0)
	{
		cout << "Notele la engleza sunt egale";
	}
	else if (cmp1 == 1)
	{
		cout << "Nota la engleza a primului student este mai mare";
	}
	else if (cmp1 == -1)
	{
		cout << "Nota la engleza a celui de-al doilea student este mai mare";
	}

	cmp4 = Compara_Note_Istorie(st1, st2);

	if (cmp1 == 0)
	{
		cout << "Notele la istorie sunt egale";
	}
	else if (cmp1 == 1)
	{
		cout << "Nota la istorie a primului student este mai mare";
	}
	else if (cmp1 == -1)
	{
		cout << "Nota la istorie a celui de-al doilea student este mai mare";
	}

	cmp5 = Compara_Medie(st1, st2);

	if (cmp1 == 0)
	{
		cout << "Mediile sunt egale";
	}
	else if (cmp1 == 1)
	{
		cout << "Media primului student este mai mare";
	}
	else if (cmp1 == -1)
	{
		cout << "Media celui de-al doilea student este mai mare";
	}

	return 0;
}