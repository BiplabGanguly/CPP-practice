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

    int mx = INT_MIN;
    int mn = INT_MAX;

    for(int i=0;i<n;i++){
        mx = max(mx,arr[i]);
        mn = min(mn,arr[i]);
    }
    cout<<mx<<" "<<mn<<endl;
    cout<<INT_MAX<<" "<<INT_MIN;
    return 0;
}
