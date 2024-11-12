/*Iterative and recursive version ogf GCD by Euclid's alogrithm*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "gcdHeader.h"

int main(void)
{
    int a, b;

    // Generate two random numbers between 1 and 100
    srand(time(NULL));
    a = (rand() % 100) + 1;
    b = (rand() % 100) + 1;

    printf("Iterative GCD(%d %d) is %d\n", a, b, iterativeGCD(a, b));

    printf("Recursive GCD(%d %d) is %d\n", a, b, recursiveGCD(a, b));

    return 0;
}