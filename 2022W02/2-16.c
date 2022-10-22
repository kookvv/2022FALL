// https://www.acwing.com/problem/content/submission/code_detail/18297507/
#include<stdio.h>
int main()
{
    int A, N;
    int sum = 0;
    scanf_s("%d", &A);
    while (scanf_s("%d", &N))
    {
        if (N > 0)
            break;
    }
    for (int i = A; i < (A + N); i++)
    {
        sum = sum + i;
    }
    printf("%d", sum);
    return 0;
}