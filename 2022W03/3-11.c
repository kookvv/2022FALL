//https://www.acwing.com/problem/content/submission/code_detail/18565767/
#include<stdio.h>
int main()
{
    int n;
    scanf_s("%d\n", &n);
    while (n--)
    {
        int x;
        scanf_s("%d\n", &x);
        if (x == 6 || x == 28 || x == 496 || x == 8128 || x == 33550336)
            printf("%d is perfect\n", x);
        else
            printf("%d is not perfect\n", x);
    }
    return 0;
}