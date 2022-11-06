//https://www.acwing.com/problem/content/submission/code_detail/18808656/
#include<stdio.h>
#include<string.h>
int main()
{
    char a[101] = "", b[102] = "";
    gets(a);
    int i = 0;
    while (a[i] > 0)
    {
        if (a[i + 1] == 0)
            b[i] = a[i] + a[0];
        else b[i] = a[i] + a[i + 1];
        i++;
    }
    puts(b);
    return 0;
}