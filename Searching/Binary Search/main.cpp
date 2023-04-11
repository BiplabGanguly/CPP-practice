#include <iostream>

using namespace std;


int binary_search(int arr[], int size, int a){
    int start = 0;
    int end = size;

    while(start <= end){
    int mid= (end+start) /2;

        if(a == arr[mid]){
            return mid;
        }
        else if(a <= arr[mid]){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int input(int arr[], int size){
    for(int i=0;i<size; i++){
        cin>>arr[i];
    }

    int a;
    cin>>a;
    int r = binary_search(arr, size ,a);
    return r;
}

int main()
{
    int size;
    cin>>size;
    int arr[size];

    int result = input(arr, size);
    cout<<result;
    return 0;
}
