#include <stdio.h>
#include <math.h>

// Making TanArr a global variable
int N = 12;
float TanArr[13];

// method initialization
float degtorad(float degarg);
float traprule();

int main(void)
{
    float a = 0.0, b_deg = 60.0;
    float deg;

    // calculate the area at pts x1, x2, x3,..., x11 and add them up
    int i;
    for (i = 0; i < N; i++)
    {
        deg = i * 5;
        TanArr[i] = tan(degtorad(deg));
        printf("TanArr [%d] - %f\n", i, TanArr[i]);
    }

    float area = traprule();

    // approximated result
    printf("\n Trapezoidal result is: %f\n", area);
    // Actual result
    // Integral of tan is ln(2)
    printf("Real result is: %f\n", log(2));

    return 0;
}

// Method body
float degtorad(float degarg)
{
    return ((M_PI * degarg) / 180.0);
}

float traprule()
{
    float area;
    int j;

    // sum tan(a)+tan(b) where a and b are in radians
    area = TanArr[0] + TanArr[N];
    printf("Initial area (sum at x(0) and x(12)) = %f\n", area);

    for (j = 1; j < N; j++)
    {
        area += 2 * TanArr[j];
    }

    printf("The value of the sum after the loop is: %f\n", area);
    // Multiply area by (pi/3)/2(12) after converting it to radians
    float mult_rad = degtorad((60.0 - 0.0) / (2 * N)); // (M_PI*((b_deg-a) / (2*N))) / 180.0;
    area = mult_rad * area;
    return area;
}