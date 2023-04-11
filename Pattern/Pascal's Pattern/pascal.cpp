#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int num = 1; 
        for(int k = n-2;k>=i;k--){
                cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<to_string(num)+" ";
           num = (num  * (i-j))/(j+1);
        }
        cout<<endl;
    }
}