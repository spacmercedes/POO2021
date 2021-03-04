#pragma once

#include <cstdarg>
#include <iostream>
#include <cstring>
#include <string.h>
#include <iomanip>

using namespace std;

class Math
{
public:
    static int Add(int, int);

    static int Add(int, int, int);

    static int Add(double, double);

    static int Add(double, double, double);

    static int Mul(int, int);

    static int Mul(int, int, int);

    static int Mul(double, double);

    static int Mul(double, double, double);

    static int Add(int count, ...); // sums up a list of integers

    static float Division(int, int);

    static char* Add(const char*, const char*);
};

