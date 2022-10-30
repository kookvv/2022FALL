//https://www.acwing.com/problem/content/submission/code_detail/18384608/
#include<stdio.h>
int main()
{
    double N;
    scanf_s("%lf", &N);
    int M = N * 100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", M / 10000); M %= 10000;
    printf("%d nota(s) de R$ 50.00\n", M / 5000); M %= 5000;
    printf("%d nota(s) de R$ 20.00\n", M / 2000); M %= 2000;
    printf("%d nota(s) de R$ 10.00\n", M / 1000); M %= 1000;
    printf("%d nota(s) de R$ 5.00\n", M / 500); M %= 500;
    printf("%d nota(s) de R$ 2.00\n", M / 200); M %= 200;

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", M / 100); M %= 100;
    printf("%d moeda(s) de R$ 0.50\n", M / 50); M %= 50;
    printf("%d moeda(s) de R$ 0.25\n", M / 25); M %= 25;
    printf("%d moeda(s) de R$ 0.10\n", M / 10); M %= 10;
    printf("%d moeda(s) de R$ 0.05\n", M / 5); M %= 5;
    printf("%d moeda(s) de R$ 0.01\n", M / 1); M %= 1;
    return 0;
}