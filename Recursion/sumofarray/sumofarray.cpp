#include <bits/stdc++.h>
using namespace std;

int calculatesum(int *arr, int n, int sum=0){
    if(n==0){
        return sum;
    }
    else{
        sum += arr[0];
        return calculatesum(arr+1,n-1,sum);
    }
}


int main(){
    int arr[5] = {1,2,3,4,2};
    int s = calculatesum(arr,5);
    cout<<s<<endl;
    return 0;
}