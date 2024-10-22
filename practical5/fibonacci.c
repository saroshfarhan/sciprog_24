#include <stdio.h>
#include <stdlib.h>

void update_fibonacci(int *fn1, int *fn2);

int main(void)
{

    int n;
    int f0 = 0, f1 = 1;

    printf("Enter a number till which you want Fibonacci sequence: \n");
    scanf("%d", &n);

    printf("%d ", f0);

    if (n < 1)
    {
        printf("n must be bigger than 1 \n");
        exit(1);
    }

    if (n > 0)
    {
        printf("%d ", f1);
    }

    int i;
    for (i = 2; i <= n; i++)
    {
        update_fibonacci(&f1, &f0);
        printf("%d ", f1);
    }

    printf("\n");
    return 0;
}

void update_fibonacci(int *fn1, int *fn2)
{
    int fn = *fn1 + *fn2;
    *fn2 = *fn1;
    *fn1 = fn;
}