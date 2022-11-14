#include<stdio.h>
int is_sorted(int arr[], int left, int right)
{
	while (left < right)
	{
		if (arr[left] > arr[left + 1])
			return 0;
	}
	return 1;
}
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	if (is_sorted(arr, 0, 3) == 1)
		printf("yes");
	else printf("no");
	return 0;
}