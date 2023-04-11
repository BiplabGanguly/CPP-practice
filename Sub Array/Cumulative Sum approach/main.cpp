#include <iostream>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum[n+1];

    sum[0] = 0;

    for(int i=1;i<=n;i++){
        sum[i] = sum[i-1]+  arr[i-1];
    }
    int mx = INT_MIN;

    for(int i=1;i<=n;i++){
        int s = 0;
        for(int j=0;j<=i;j++){
            s = sum[i] - sum[j];
            mx = max(s,mx);
        }
    }
    cout<<mx<<endl;

    return 0;
}
