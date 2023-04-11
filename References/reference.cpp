#include <bits/stdc++.h>
using namespace std;

void swap( int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int n = 5,m=6;
    cout<<n<<" "<<m<<endl;
    swap(n,m);
    cout<<n<<" "<<m<<endl;
    return 0;
}