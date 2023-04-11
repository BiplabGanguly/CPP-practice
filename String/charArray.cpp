#include <bits/stdc++.h>
using namespace std;

int main(){

    char arr[5];

    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    int sum = 0;
    string s = "";

    if(isdigit(arr[0])){
        for(int i=0;i<5;i++){
            int k  = arr[i] - 48;
            sum += k;
        }
        cout<<sum;
    }
    else{
        for(int i=0;i<5;i++){
        s += arr[i];
        }
        cout<<s;
    }
    

    // cout<<sum;

    // cout<<'1'-'1'<<endl;

    return 0;
}