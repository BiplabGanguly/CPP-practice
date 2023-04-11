#include <bits/stdc++.h>
using namespace std;

int mergeArr(int a[], int n, int b[], int m)
{
    int i = 0, j = 0;
    while (i < n)
    {
        if (a[i] < b[j])
        {
            if (a[i] == 0)
            {
                a[i] = b[j];
                j++;
            }
            i++;
        }
        else
        {
            int k = n - 2;
            while (k >= i)
            {
                a[k + 1] = a[k];
                k--;
            }
            a[i] = b[j];
            j++;
            i++;
        }
    }
}

int printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[7] = {1, 3, 5, 0, 0, 0, 0};
    int b[4] = {2, 4, 6, 7};
    mergeArr(a, 7, b, 4);
    printArr(a, 7);
    return 0;
}