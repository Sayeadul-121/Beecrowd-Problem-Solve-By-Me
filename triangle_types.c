#include <stdio.h>

int main()
{
    double A, B, C, store_1, store_2, store_3;

    scanf("%lf %lf %lf", &A, &B, &C);

    // Finding the largest number
    if (A >= B && A >= C)
    {
        if (B >= C)
        {
            store_1 = A;
            store_2 = B;
            store_3 = C;
        }
        else
        {
            store_1 = A;
            store_2 = C;
            store_3 = B;
        }
    }

    else if (B >= A && B >= C)
    {
        if (A >= C)
        {
            store_1 = B;
            store_2 = A;
            store_3 = C;
        }
        else
        {
            store_1 = B;
            store_2 = C;
            store_3 = A;
        }
    }

    else
    {
        if (B >= A)
        {
            store_1 = C;
            store_2 = B;
            store_3 = A;
        }
        else
        {
            store_1 = C;
            store_2 = A;
            store_3 = B;
        }
    }

    // Triangle test
    if (store_1 >= store_2 + store_3)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else
    {
        // Angle classification
        if (store_1 * store_1 ==
            store_2 * store_2 + store_3 * store_3)
        {
            printf("TRIANGULO RETANGULO\n");
        }
        else if (store_1 * store_1 >
                 store_2 * store_2 + store_3 * store_3)
        {
            printf("TRIANGULO OBTUSANGULO\n");
        }
        else
        {
            printf("TRIANGULO ACUTANGULO\n");
        }

        // Side classification
        if (store_1 == store_2 && store_2 == store_3)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (store_1 == store_2 ||
                 store_2 == store_3 ||
                 store_1 == store_3)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
    }

    return 0;
}
