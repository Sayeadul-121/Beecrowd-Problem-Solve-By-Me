#include <stdio.h>
int main()
{

    double N, P;
    int r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, r12, r13;
    int c1, c2, c3, c4, c5, c6, c7, c8, c9, c10;
    scanf("%lf", &N);

    r1 = (int)N / 100;
    r2 = (int)N % 100;

    r3 = r2 / 50;
    r4 = r2 % 50;

    r5 = r4 / 20;
    r6 = r4 % 20;

    r7 = r6 / 10;
    r8 = r6 % 10;

    r9 = r8 / 5;
    r10 = r8 % 5;

    r11 = r10 / 2;
    r12 = r10 % 2;

    r13 = r12 / 1;

    P = (N * 100) - ((int)N * 100);

    c1 = (int)P / 50;
    c2 = (int)P % 50;

    c3 = c2 / 25;
    c4 = c2 % 25;

    c5 = c4 / 10;
    c6 = c4 % 10;

    c7 = c6 / 5;
    c8 = c6 % 5;

    c9 = c8 / 1;
    c10 = c8 % 1;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", r1);
    printf("%d nota(s) de R$ 50.00\n", r3);
    printf("%d nota(s) de R$ 20.00\n", r5);
    printf("%d nota(s) de R$ 10.00\n", r7);
    printf("%d nota(s) de R$ 5.00\n", r9);
    printf("%d nota(s) de R$ 2.00\n", r11);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", r13);
    printf("%d moeda(s) de R$ 0.50\n", c1);
    printf("%d moeda(s) de R$ 0.25\n", c3);
    printf("%d moeda(s) de R$ 0.10\n", c5);
    printf("%d moeda(s) de R$ 0.05\n", c7);
    printf("%d moeda(s) de R$ 0.01\n", c9);

    return 0;
}