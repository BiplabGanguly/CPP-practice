#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }
    int val;
    cin>>val;
    int j = n-1;
    for(int i=0;i<n;i++){
        if(v[i] > val){
            while(j>=i){
                v[j+1] = v[j];
                j--;
            }
            v[j+1] = val;
        }
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}