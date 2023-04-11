#include <bits/stdc++.h>
using namespace std;

int fibo(int n,int a=0,int b=1){
    if(b == n){
        cout<<b<<endl;
        return b;
    }
    else{
        cout<<b<<endl;
        return fibo(n,b,a+b);
    }
}

int main(){
    int n;
    cin>>n;
    fibo(n);
}