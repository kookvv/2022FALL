#include<stdio.h>
int main()
{
	void triangle_judge(int a, int b, int c);
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a <= 0 || b <= 0 || c <= 0)
		printf("无法构成三角形\n");
	else if (a + b > c && a + c > b && b + c > a)
	{
		if (a==b&&b!=c||a==c&&c!=b||b==c&&c!=a)
			printf("等腰三角形\n");
		if (a ==b &&b == c)
			printf("等边三角形\n");
		else if(a!=b&&a!=c&b!=c)
		   printf("普通三角形\n");
	}
	else
		printf("无法构成三角形\n");
	return 0;
}