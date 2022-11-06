//https://www.acwing.com/problem/content/submission/code_detail/18718146/
int duplicateInArray(int* nums, int numsSize)
{
    int i, j;
    if (numsSize == 0)
        return -1;
    for (i = 0; i < numsSize; i++)
        for (j = i; j < numsSize; j++)
        {
            int temp;
            if (nums[i] <= nums[j])
            {
                temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    if (nums[0] >= numsSize - 1)
        return -1;
    for (i = 0; i < numsSize; i++)
    {
        int a = nums[i];

        for (j = i + 1; j < numsSize; j++)
        {
            if (a == nums[j])
                return a;
            break;
        }
    }
}