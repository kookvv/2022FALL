#include<stdio.h>
int main()
{
	char a = 'B', b = 33;
	char c = '0', d = '9';
	a = a - 'A' + '0';
	b = b * 2;
	printf("%c,%c\n", a, b);
	c++, d--;
	printf("%c,%c\n", c, d);

	int i = 8, j = 10;
	int m = ++i;
	int n = j++;
	int x = -i++;
	int y = j + 12 / ++j;
	printf("%d,%d,%d,%d\n", i, j, m, n);
	printf("%d,%d,%d,%d\n", i, j, x, y);
	return 0;
}
