//
// Created by brian on 13/05/2021.
//
#include "avg_and_max.h"

int  factorial(int n)
{
  int fact =1;
    if (n == 0) {
        return 1;
    }
    else {
        for (int i = 1; i <= n; ++i) {
            fact *= i;
        }
    }

        return fact;
}
