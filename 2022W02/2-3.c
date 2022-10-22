#include<stdio.h>
#include<math.h>
int main()
{
	int x, y, a, b, c;
	scanf_s("%d %d %d %d", &x, &a, &b, &c);
	y = x * x * x + 2 * x * x + 3 * x + 1;
	printf("%d\n", y);
	if (sqrt(abs(x))!=4*a/(b*c))
	{
		printf("不等于");
	}
	else
	{
		printf("等于");
	}
}