#include "Math.h"

int main()
{
	cout << "Suma int,int: "<<Math::Add(6, 4) << endl;

	cout << "Suma int,int,int:  " << Math::Add(6, 4, 5) << endl;

	cout << "Suma float,float:  " << Math::Add(2.5, 3.5) << endl;

	cout << "Suma float,float,float:  " << Math::Add(2.5, 3.5, 1.5) << endl;

	cout << "Produs int,int:  " << Math::Mul(6, 4) << endl;

	cout << "Produs int,int,int:  " << Math::Mul(6, 4, 5) << endl;

	cout << "Produs float,float:  " << Math::Mul(2.5, 3.5) << endl;

	cout << "Produs float,float,float:  " << Math::Mul(2.5, 3.5, 1.5) << endl;

	cout << "Suma unor numere intregi, utilizand parametru variatic: "<<Math::Add(3, 100, 100, 100) << endl;

	cout << "Impartire int/int cu rezultat float: "<<fixed<<setprecision(2)<<Math::Division(5, 2)<<endl;

	cout << "Siruri de caractere concatenate: "<<Math::Add("mere", "dulci");

	return 0;
}