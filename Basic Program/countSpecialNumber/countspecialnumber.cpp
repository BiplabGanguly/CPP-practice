#include <bits/stdc++.h>
using namespace std;

    int countSpecialNumbers(int n, vector<int> arr) {
        int mx = INT_MIN;

        for(int i=0;i<n;i++){
            mx = max(mx,arr[i]);
        }
        vector<int> v(mx+1,0);


        for(int i=0;i<n;i++){
            if(v[arr[i]] <= 1){
                 for(int j=arr[i];j<=mx;j+=arr[i]){
                    v[j]++;
                }
            }
        }

        int count = 0;
        for(int i=0;i<mx;i++){
            if(v[arr[i]] > 1){
                count++;
            }
        }
        return count;
}

    



int main(){
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        v.push_back(k);
    }

    int ans = countSpecialNumbers(n,v);
    cout<<ans<<endl;
}