// https://www.acwing.com/problem/content/submission/code_detail/18385756/
#include<stdio.h>
int main()
{
    float n, m=0;
    scanf_s("%f\n", &n);
    if (n >= 0 && n <= 2000)
        printf("Isento");
    else
    {
        if (n > 2000 && n <= 3000)
            m = (n - 2000) * 0.08;
        if (n > 3000 && n <= 4500)
            m = 80 + (n - 3000) * 0.18;
        if (n > 4500)
            m = 350 + (n - 4500) * 0.28;
        printf("R$ %.2f", m);
    }
    return 0;
}