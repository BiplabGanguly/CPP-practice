#include <bits/stdc++.h>
using namespace std;

string reverseString(string a,int i,int j){
    if(i >= j){
        return a;
    }
    else{
        swap(a[i],a[j]);
        i++;
        j--;
        return reverseString(a,i,j);
    }
}


int main(){
    string s;
    cout<<"enter a string::"<<endl;
    cin>>s;
    int i=0;
    int j = s.length()-1;
    cout<<j<<endl;
    cout<<reverseString(s,i,j)<<endl;
    return 0;
}