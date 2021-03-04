#include "Math.h"

int Math::Add(int a, int b)
{
	return a + b;
}

int Math::Add(int a, int b, int c)
{
	return a + b + c;
}

int Math::Add(double a, double b)
{
	return a + b;
}

int Math::Add(double a, double b, double c)
{
	return a + b + c;
}

int Math::Mul(int a, int b)
{
	return a * b;
}

int Math::Mul(int a, int b, int c)
{
	return a * b * c;
}

int Math::Mul(double a, double b)
{
	return a * b;
}

int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}

int Math::Add(int count, ...)
{
	va_list lista;
	int suma = 0;

	va_start(lista, count);

	for (int i = 0; i < count; i++)
		suma += va_arg(lista, int);

	va_end(lista);

	return suma;
}

float Math::Division(int a, int b)
{
	return (float)a / (float)b;
}

char* Math::Add(const char* s1, const char* s2)
{
	char* s;

	if (s1 == nullptr || s2 == nullptr)
		return nullptr;
	else 
	{
		s = new char[strlen(s1) + strlen(s2) + 1];
		strcpy(s, s1);
		strcat(s, s2);

		return s;
	}
	
}
