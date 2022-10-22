//https://www.acwing.com/problem/content/submission/code_detail/18294303/
#include<stdio.h>
int main()
{
    int a, b, c, m, n;
    a = 0, b = 1;
    scanf_s("%d", &n);
    if (n == 1)
        printf("0");
    if (n == 2)
        printf("0 1");

    if (n >= 3)
        printf("%d %d", a, b);
    for (m = 2; m < n; m++)
    {
        c = a + b;
        printf(" %d", c);
        a = b;
        b = c;
    }
    return 0;
}
