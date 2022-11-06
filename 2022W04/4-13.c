//https://www.acwing.com/problem/content/submission/code_detail/18808388/
#include<stdio.h>
#include<string.h>
int main()
{
    char s[99], s1[99];
    gets(s);
    int i, t;
    char n;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (t = 0; s[t] != '\0'; t++) {
            if (s[i] < s[t]) {
                n = s[t];
                s[t] = s[i];
                s[i] = n;
            }
        }
    }
    puts(s);
    return 0;
}