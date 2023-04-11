#include <bits/stdc++.h>
using namespace std;

int margeSortedArray(int a[], int n, int b[], int m, int na[])
{
    int i = 0, j = 0;
    int k = 0;
    while (i < n && j < m)
    {
        if (a[i] < b[j])
        {
            na[k] = a[i];
            i++;
            k++;
        }
        else
        {
            na[k] = b[j];
            j++;
            k++;
        }
    }
    // cout<<i<<" "<<j;
    while(i<n){
        na[k] = a[i];
        i++;
        k++;
    }
    while(j<m){
        na[k] = b[j];
        j++;
        k++;
    }
}

int printArr(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

int main()
{
    int a[5] = {1, 3, 5, 7, 9};
    int b[4] = {2, 4, 6, 8};
    int newarr[9];
    margeSortedArray(a, 5, b, 4, newarr);
    printArr(newarr, 9);
    return 0;
}