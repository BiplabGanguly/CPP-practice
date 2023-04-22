#include <bits/stdc++.h>
using namespace std;

bool checkPalindrome(string s, int i,int j){
    if(i >= j){
        return true;
    }
    else {
        if(s[i] == s[j]){
            i++;
            j--;
            return checkPalindrome(s,i,j);
        }
        else{
            return false;
        }
    }
}

int main(){
    string s;
    cin>>s;
    int i=0;
    int j= s.length()-1;
    bool  check  = checkPalindrome(s,i,j);
    cout<<check<<endl;
    return 0;
}