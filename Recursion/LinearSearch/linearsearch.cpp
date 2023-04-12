#include <bits/stdc++.h>
using namespace std;

bool linearsearch(int *arr, int n, int key){
        if (arr[0] == key){
            return true;
        }
        else{
            return linearsearch(arr+1,n-1,key);
        }
}


int main(){
    int arr[5] = {1,2,3,4,5};
    bool check = linearsearch(arr,5,6);
    cout<<check<<endl;
    return 0;
}