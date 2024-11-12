/*Iterative and recursive version ogf GCD by Euclid's alogrithm*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int iterativeGCD(int a, int b)
{
    int temp;
    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int recursiveGCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return recursiveGCD(b, a % b);
    }
}

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