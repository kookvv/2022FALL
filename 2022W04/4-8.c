//https://www.acwing.com/problem/content/submission/code_detail/18718436/
void reOrderArray(int* array, int length)
{
    int i, j, t;
    i = j = 0;
    while (i < length && j < length)
    {
        while (array[i] % 2 == 0 && j < length)
        {
            if (array[++j] % 2 != 0)
            {
                t = array[i];
                array[i] = array[j];
                array[j] = t;
                break;
            }
        }
        j = ++i;
    }
}
