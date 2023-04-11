#include <bits/stdc++.h>
using namespace std;

// int main(){
//     int arr[5] = {4,4,5,5,6};
//     int n = 5;
//     int c = 0;
//     for(int i=0;i<n;i++){
//         c = c ^ arr[i];
//     }
//     cout<<c<<endl;
// }

int main(){
int N = 4;
int A[4] = {4,4,3,3};
    set<int> ls,rs;
    vector<int> lft(N), rgt(N);
        for(int i=0;i<N;i++) {
            lft[i] = ls.size();
            ls.insert(A[i]);
        }
        for (auto& str : ls) {
            cout << str << ' ';
        }
        cout<<endl;
        for(int j=N-1;j>=0;j--) {
            rgt[j] = rs.size();
            rs.insert(A[j]);
        }
         for (auto& str : rs) {
            cout << str << ' ';
        }
    vector<int> ans(N);
        for(int i=0;i<N;i++) {
            ans[i] = lft[i]-rgt[i];
        }
        // for(int i=0;i<ans.size();i++){
        //     cout<<ans[i]<<" ";
        // }
     
}
