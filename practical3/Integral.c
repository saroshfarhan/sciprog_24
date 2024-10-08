#include <stdio.h>
#include <math.h>

int main(void)
{
    int i;
    double outerSum, point, finalIntegral;
    double end = M_PI / 3;
    double start = 0;
    double step = (end - start) / 12;

    outerSum = tan(0) + tan(M_PI / 3);

    for (i = 0; i < 12; i++)
    {
        point = start + i * step;
        outerSum += 2 * tan(point);
    }

    finalIntegral = ((end - start) / 24) * outerSum;

    printf("The Integral is: %.4f \n", finalIntegral);

    printf("log(2) value is: %.4f \n", log(2));

    float abs_diff = fabs(finalIntegral - log(2));
    float rel_diff = fabs(1 - (finalIntegral / log(2)));

    printf("abs_diff = %f\n rel_diff = %f\n", abs_diff, rel_diff);

    return 0;
}