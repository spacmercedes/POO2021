#include "Canvas.h"

using namespace std;

int main()
{
	Canvas a(50, 100);

	a.DrawLine(5, 1, 9, 30, '*');

	cout << endl;

	//a.DrawLine(10, 3, 25, 15, '*');

	cout << endl;

	a.DrawRect(5, 1, 9, 10, '*');

	return 0;
}