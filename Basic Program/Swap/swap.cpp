#include <bits/stdc++.h>
using namespace std;


int main(){
    int arr[6] = {17,12,-1,-2,-5,13};
    int l = 0;
    int mid = 0;
    int high = 5;
    
 while(mid<=high){
        if(arr[mid]<0){
            swap(arr[mid],arr[l]);
            l++;
            mid++;
        }
        else{
            mid++;
        }
    }
    
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}