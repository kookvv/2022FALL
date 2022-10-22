#include<stdio.h>
#include<math.h>
int main()
{
	int m, n;
	scanf_s("%d", &m);
	for (n = 2; n <= sqrt(m); n++)
	{
		if (m % n == 0)
			break;
	}
	if (n <= sqrt(m))
		printf("%d不是素数", m);
	else
		printf("%d是素数", m);
	return 0;
}   