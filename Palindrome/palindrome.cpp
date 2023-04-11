#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    if(n<=9){
        cout<<"Palindrome"<<endl;
    }
    else if(n%11 == 0){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not palindrome"<<endl;
    }

    return 0;
}