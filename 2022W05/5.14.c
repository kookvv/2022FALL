//https://www.acwing.com/problem/content/submission/code_detail/19023974/
int* specialSort(int N, int* returnSize) {
    *returnSize = N;
    int* ans = (int*)malloc(sizeof(int) * N);
    ans[0] = 1;
    for (int i = 2; i <= N; ++i)
    {
        int l = 0, r = i - 2;
        while (l < r)
        {
            int mid = (l + r + 1) >> 1;
            if (compare(ans[mid], i))
                l = mid;
            else
                r = mid - 1;
        }
        for (int j = i - 1; j > l; --j)
            ans[j] = ans[j - 1];
        if (l == 0 && compare(i, ans[0]))
            ans[l] = i;
        else
            ans[l + 1] = i;
    }
    return ans;
}
