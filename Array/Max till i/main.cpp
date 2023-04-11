#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>> n;
    int arr[n];
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }
    int m = -1999999;

    for(int i=0; i<n; i++){
        m = max(m,arr[i]);
        cout<<m<<" ";
    }
    return 0;
}
