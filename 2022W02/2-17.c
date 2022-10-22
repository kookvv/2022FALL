// https://www.acwing.com/problem/content/submission/code_detail/18300151/
#include<stdio.h>
int main()
{
    int N, i;
    scanf_s("%d", &N);
    for (i = 1; i <= N; i++)
    {
        if (N % i == 0)
            printf("%d\n", i);
    }
    return 0;
}