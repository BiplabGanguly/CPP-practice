#include <bits/stdc++.h>
using namespace std;

bool checkarr(int *arr, int size){
    if(size == 1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool check = checkarr(arr+1,size-1);
        return check;
    }
}


int main(){
    int arr[5] = {1,2,6,4,5};
    bool k = checkarr(arr,5);

    cout<<k<<endl;

    return 0;
}