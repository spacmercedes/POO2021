#include "NumberList.h"

void NumberList::Init()
{
    count = 0;
}

bool NumberList::Add(int x)
{
    if (count > 10)
        return false;

    numbers[count++] = x;
    return true;
}

void NumberList::Sort()
{
    bool ok;
    int aux;

    do
    {
        ok = false;

        for (int i = 0; i < count - 1; i++)
            if (numbers[i] > numbers[i + 1])
            {
                aux = numbers[i];
                numbers[i] = numbers[i + 1];
                numbers[i + 1] = aux;
                ok = true;
            }
    } while (ok == true);
}

void NumberList::Print()
{
    cout << "Elementele listei: ";
    for (int i = 0; i < count; i++)
        cout << numbers[i]<<" ";
}
