#include <bits/stdc++.h>
using namespace std;

int binary_search(int *arr, int st,int nd, int key){
    int mid = (st+nd)/2;
    if (arr[mid] == key){
        return 1;
    }
    else if(arr[mid] > key){
        return binary_search(arr,st,mid-1,key);
    }
    else{
        return binary_search(arr,mid+1,nd,key);
    }
        
}


int main(){
    int arr[6] = {1,2,3,4,5,6};
    int n=6;
    int key = 3;
    int start = 0;
    int end = n-1;
    int check = binary_search(arr,start,end,key);
    if(check){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
}