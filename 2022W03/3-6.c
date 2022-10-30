#include<stdio.h>
int GCD_recursive(int m, int n)
{
	if (m == 0 || n == 0) return 0;
	else if (m % n == 0) return n;
	else GCD_recursive(n, m % n);
}
int main()
{
	int m, n;
	scanf_s("%d %d", &m, &n);
	printf("%d", GCD_recursive(m, n));
	return 0;
}