#include <stdio.h>
#include <math.h>

int main()
{
    int a, result_1, result_2, result_3, result_4, result_5, result_6, result_7, result_8, result_9, result_10, result_11, result_12, result_13, result_14;
    scanf("%d", &a);

    result_1 = a / 100;
    result_2 = a % 100;
    result_3 = result_2 / 50;
    result_4 = result_2 % 50;
    result_5 = result_4 / 20;
    result_6 = result_4 % 20;
    result_7 = result_6 / 10;
    result_8 = result_6 % 10;
    result_9 = result_8 / 5;
    result_10 = result_8 % 5;
    result_11 = result_10 / 2;
    result_12 = result_10 % 2;
    result_13 = result_12 / 1;
    result_14 = result_12 % 1;

    printf("%d\n", a);
    printf("%d nota(s) de R$ 100,00\n", result_1);
    printf("%d nota(s) de R$ 50,00\n", result_3);
    printf("%d nota(s) de R$ 20,00\n", result_5);
    printf("%d nota(s) de R$ 10,00\n", result_7);
    printf("%d nota(s) de R$ 5,00\n", result_9);
    printf("%d nota(s) de R$ 2,00\n", result_11);
    printf("%d nota(s) de R$ 1,00\n", result_13);

    return 0;
}