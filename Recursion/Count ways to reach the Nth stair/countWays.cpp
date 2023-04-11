#include <bits/stdc++.h>
using namespace std;

int countWays(int n){
    if(n<0){
        return 0;
    }
    if(n==1){
        return 1;
    }

    int ans = countWays(n-1)+countWays(n-2);
    return ans;
}

int main(){
    int n;
    cin>>n;

    int a = countWays(n);
    cout<<a<<endl;
}