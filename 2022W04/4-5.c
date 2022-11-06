//https://www.acwing.com/problem/content/submission/code_detail/18664409/
#include<stdio.h>
int a[25];
int main()
{
    int n;
    scanf_s("%d", &n);
    a[0] = 1;
    a[1] = 1;
    a[2] = a[0] + a[1];
    for (int i = 3; i <= n; i++)
    {
        a[i] = a[i - 1] + a[i - 2] + a[i - 3];
    }
    printf("%d", a[n]);
    return 0;
}
