//https://www.acwing.com/problem/content/submission/code_detail/18280261/
#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c, m, x;
    scanf_s("%d %d %d", &a, &b, &c);
    m = (a + b + abs(a - b)) / 2;
    x = (c + m + abs(c - m)) / 2;
    printf("%d en o maior", x);
    return 0;
}