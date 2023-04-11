#include <iostream>

using namespace std;

int findIndex(int arr[],int n,int i){
    if(i==n){
        return findIndex(arr+1,n-1,i=1);
    }
   if(arr[0] == arr[i]){
    return arr[i];
   }
   else{
    return findIndex(arr,n,i+1);
   }
}

int main()
{
    int arr[] = {1,2,3,4,3};
    int n = 5, i=1;
    cout<<findIndex(arr,n,i)<<endl;
    return 0;
}
