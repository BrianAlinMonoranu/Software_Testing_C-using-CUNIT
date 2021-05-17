//
// Created by brian on 13/05/2021.
//
#include "avg_and_max.h"
int gcd1(int a, int b)
{
    int t;
    while(b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}
int gcd2(int a, int b)
{
    while (a != b) {
        if (a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    return a;
}
int gcd3(int a, int b)
{
    if (a == 0) {
        return b;
    }
    else {
        return gcd3(b % a, a);
    }
}
