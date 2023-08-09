#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans = "";


    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){
            cout<<ans<<endl;
            char temp = tolower(s[i]);
            ans ="";
            ans += temp;
        }
        else{
            if(isupper(s[i])){
                ans += tolower(s[i]);
            }
            else{
                ans += toupper(s[i]);
            }
        }
    }
    cout<<ans;
}