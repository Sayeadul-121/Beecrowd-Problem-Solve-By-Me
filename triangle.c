#include <stdio.h>
#include <math.h>
int main()
{
    float A, B, C, Perimetro;
    scanf("%f%f%f", &A, &B, &C);
    Perimetro = A + B + C;

    if (A + B > C && B + C > A && A + C > B)
    {
        printf("Perimetro = %.1f\n", Perimetro);
    }
    else
    {
        printf("Area = %.1f\n", 0.5 * (A + B) * C);
    }
    return 0;
}