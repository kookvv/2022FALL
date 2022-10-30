#include<stdio.h>
int GCD_iterative(int m, int n);
int main()
{
    int a, b, c, m;
    scanf_s("%d %d", &a, &b);
    if (a < b)
    {
        m = a;
        a = b;
        b = m;
    }
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    printf("%d", a);
    return 0;
}