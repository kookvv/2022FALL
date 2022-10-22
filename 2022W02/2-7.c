#include<stdio.h>
#include<math.h>
int main()
{
	long int a, b, c, m, n;
	scanf_s("%ld %ld %ld", &a, &b, &c);
	m =pow(a,b);
	n = m % c;
	printf("%ld", n);
	return 0;
}