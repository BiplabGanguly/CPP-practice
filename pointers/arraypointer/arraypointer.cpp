#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[5] = {1,2,3,4,5};
    // cout<<"address of first location"<<arr<<endl;
    // cout<<"address of first location"<<&arr[0]<<endl;
    // cout<<"address of second location"<<&arr[1]<<endl;

    // cout<<"address 1 "<<&arr<<endl;
    // cout<<"address 2 (value) "<<*arr<<endl;
    
    //access all the values
    // for(int i=0;i<5;i++){
    //     cout<<*(arr+i)<<endl;
    // }

    int temp[5] = {0};
    cout<<" -> "<<&temp[0]<<endl;
    int *p = &temp[0];
    cout<<" -> "<<&p<<endl;
    cout<<" val ->"<<p<<endl;
    *p = 1;
    cout<<temp[0]<<endl;

    // int k = 5;
    // int *pr = &k;
    // cout<<*pr<<endl;
    return 0;
}