#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=0; i<n;i++){
        count = 0;
      for(int j=0; j<n; j++){
            if(arr[i] == arr[j]){
                count++;
            }

      }
    }

    if(count >= 2 ){
        cout<<"repeat";
        }
        else{
            cout<<"not";
        }

    return 0;
}
