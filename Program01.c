#include <stdio.h>

void sorted(int arr1[], int arr2[], int m, int n)
{
    int k = m + n;
    int ans[k];
    int extra = 0;

    for (int i = 0; i < m; i++)
    {
        ans[i] = arr1[i];
    }

    for (int i = 0; i < n; i++)
    {
        int k = m + extra;
        ans[k] = arr2[i];
        extra++;
    }

    for (int i = 0; i < k; i++)
    {
        for (int j = i + 1; j < k; j++)
        {
            if (ans[i] > ans[j])
            {
                int a = ans[i];
                ans[i] = ans[j];
                ans[j] = a;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        arr1[i] = ans[i];
    }

    int l = 0;

    for (int i = m; i < m + n; i++)
    {
        arr2[l] = ans[i];
        l++;
    }

    for (int i = 0; i < m; i++)
    {
        printf("%d\n", arr1[i]);
    }

    printf("-----------------------\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr2[i]);
    }
}

int main()
{
    int first[5] = {1, 4, 7, 8, 10};
    int second[3] = {2, 3, 9};
    sorted(first, second, sizeof(first) / sizeof(int), sizeof(second) / sizeof(int));
    return 0;
}