#include<stdio.h>
#include<string.h>
void reverse(char* str)
{
	if (*str == '\0')return;
	reverse(++str);
	printf("%c", *(--str));
}

int main()
{
	char str[] = "\0";
	reverse(str);
	return 0;
}