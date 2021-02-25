#include "NumberList.h"

int main()
{
    int n, nr, i;
    NumberList l;

    l.Init();

    cout << "Introduceti un numar de elemente intre 0 si 10: " << endl;
    cin >> n;

    if(n>0 && n<=10)
    {
        cout << "Introduceti numerele pe care vreti sa le adaugati in lista: " << endl;
        for (i = 1; i <= n; i++)
        {
            cin >> nr;
            l.Add(nr);
        }          

        l.Sort();

        l.Print();
    }

    else
        cout << "Numarul de elemente trebuie sa fie in intervalul 0 - 10!!!";

    
}