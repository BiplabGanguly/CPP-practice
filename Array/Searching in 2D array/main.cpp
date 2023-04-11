#include <iostream>

using namespace std;
void output(int a, int b, bool c){
    if(c){
        cout<<"found in: "<<a++<<" "<<b++<<endl;
    }
    else{
        cout<<"not"<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int f;
    cin>>f;
    bool check = false;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] == f){
                output(i,j,check = true);
            }
        }
    }
    return 0;
}
