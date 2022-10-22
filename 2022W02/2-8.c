#include<stdio.h>
int main()
{
	int m = 1;
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	for (int i=0; i <= b;i++)
	{
		m=(a*m)%c;
	}
	printf("%d", m);
	return 0;
}