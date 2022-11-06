//https://www.acwing.com/problem/content/submission/code_detail/18807785/
#include <stdio.h>
#include <string.h>
#define num_max 12
#define min(a,b) ((a)<(b)?(a):(b))
int main()
{
    int dp_3[num_max + 1], dp_4[num_max + 1], i, j;
    memset(dp_4, 0x7f, sizeof(dp_4));
    dp_3[1] = dp_4[1] = 1;
    for (i = 2; i <= num_max; i++) dp_3[i] = dp_3[i - 1] * 2 + 1;
    for (i = 2; i <= num_max; i++)
    {
        for (j = 1; j < i; j++)
        {
            dp_4[i] = min(dp_4[i], dp_4[j] * 2 + dp_3[i - j]);
        }
    }
    for (i = 1; i <= num_max; i++) printf("%d\n", dp_4[i]);
    return 0;
}