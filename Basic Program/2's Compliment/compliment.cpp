#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter a binary number::";
    cin>>n;

    vector<int> num;

    while (n>0)
    {
        int r = n%10;
        if(r == 1){
            num.push_back(0);
        }
        else{
            num.push_back(1);
        }
        n /= 10;
    }
     reverse(num.begin(),num.end());

    int i=0,sum=0;
    while (num.size()>i)
    {
        sum = sum*10 + num[i];
        i++;
    }
    int k = 1;
    while(sum >0){
        k = sum | k;
        sum = sum >> 1;
    }
    cout<<k;
    
    
    // cout<<"output--";
    // for(auto i :num){
    //     cout<<i;
    // }

    return 0;
}