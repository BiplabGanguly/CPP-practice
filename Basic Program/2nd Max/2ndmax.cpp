#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[7] = {1,2,3,4,5,7,9};
    int n = 7;
    // int mx = INT_MIN;
    // int mx2 = INT_MIN;
    // for(int i=0;i<n;i++){
    //     mx = max(arr[i],mx);
    // }

    // for(int i=0;i<n;i++){
    //     if(arr[i] != mx){
    //         mx2 = max(mx2,arr[i]);
    //     }
    // }
    // cout<<"output = "<<mx2;

    sort(arr,arr+n);
    cout<<arr[n-2];
    return 0;
}