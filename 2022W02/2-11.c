//https://www.acwing.com/problem/content/submission/code_detail/18282803/
#include<stdio.h>
int main()
{
    int N, h, m, s, x;
    scanf_s("%d", &N);
    x = N / 60;
    s = N % 60;
    if (x < 60)
        m = x, h = 0;
    else
        h = x / 60;
        m = x % 60;
    printf("%d:%d:%d\n",h, m, s);
    return 0;
}