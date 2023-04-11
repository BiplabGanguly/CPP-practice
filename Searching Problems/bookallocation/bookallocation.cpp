#include <bits/stdc++.h>
using namespace std;

bool isPossible(int arr[], int n, int st, int mid)
{
    int pagecount = 0;
    int student = 1;

    for (int i = 0; i < n; i++)
    {
        if (pagecount + arr[i] <= mid)
        {
            pagecount += arr[i];
        }
        else
        {
            student++;
            if (student > st || pagecount > mid)
            {
                return false;
            }
            pagecount = 0;
            pagecount += arr[i];
        }
    }
    return true;
}

int main()
{
    int arr[4] = {10, 20, 30, 40};
    int student = 2;
    int n = 4;
    int st = 0;
    int sum=0;
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    int nd= sum;
    int mid = st + (nd - st) / 2;
    while (st <= nd)
    {
        if (isPossible(arr, n, student, mid))
        {
            ans= mid;
            nd = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
        int mid = st + (nd - st) / 2;
    }
    cout << ans << endl;
    return 0;
}