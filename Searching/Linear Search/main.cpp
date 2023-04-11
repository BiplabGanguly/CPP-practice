#include <iostream>

using namespace std;


int linear_search(int arr[], int n , int a){
    for(int i=0;i<n ;i++){
        if(a == arr[i]){
            return i;
        }
    }
    return -1;
}

int input(int n, int arr[]){
       for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int a;
    cin>>a;
    int result = linear_search(arr,n,a);
    return result;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int result =  input(n, arr);

    if(result == -1){
        cout<<"not found!! ";
    }
    else{
        cout<<"found... "<<endl<<"index no-"<<result;
    }


    return 0;
}
