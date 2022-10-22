//https://www.acwing.com/problem/content/submission/code_detail/18288087/
#include<stdio.h>
int main()
{
    int a, b, m=0, n=0;
    scanf_s("%d %d",&a,&b);
    m=a%b;
    n=b%a;
    if (m==0||n==0)
        printf("Sao Multiplos");
    else
        printf("Nao sao Multiplos");
    return 0;
}