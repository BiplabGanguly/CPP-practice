#include <iostream>

using namespace std;

bool checkSort(int arr[], int n){
    if(n==1){
        return true;
    }

    if(arr[0]<arr[1]){
        return checkSort(arr+1,n-1);
    }
    else{
        return false;
    }
}

int main()
{
    int arr[] ={1,2,3,4,5,6};
    bool r = checkSort(arr,6);

    if(r == true){
        cout<<"sorted"<<endl;
    }
    else{
        cout<<"not"<<endl;
    }


    return 0;
}
