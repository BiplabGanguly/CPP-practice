#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int arr[7] = {1,2,3,4,5,7,6};
    int n = 7;
    int target  = 6;

    int count = 0;

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == target){
                count++;
            }
        }
    }
    

    cout<<"output = "<<count;
    return 0;
}