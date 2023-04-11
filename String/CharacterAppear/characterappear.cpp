#include <bits/stdc++.h>
using namespace std;

int checkChar(string s){
    vector<int> v(27,0);

    for(int i=0;i<s.size();i++){
            int val = s[i] - 'a';
            v[val]++;
    }

    int count = 0;
    for(int i=0;i<v.size();i++){
        if(v[i] == 3){
            count++;
        }
    }
    return count;
}

int main(){

    string str;
    cin>>str;
    int ans = checkChar(str);
    cout<<ans<<endl;
}