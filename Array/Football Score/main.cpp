#include <iostream>
using namespace std;

int main() {
    int arr[10];
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    int even = 0, odd=0;

    for(int i=0; i<10; i++){
        if(i==0 && arr[i] == 1){
            odd++;
        }
        else if(i==1 && arr[i] == 1){
            even++;
        }
        else if(i%2 == 1 && arr[i] == 1){
            even++;
        }
        else if(i%2 == 0 && arr[i] == 1){
            odd++;
        }
    }

    if(even>odd){
        cout<<2<<endl;
    }
    else if(odd>even){
        cout<<1<<endl;
    }
    else{
        cout<<0<<endl;
    }




	return 0;
}
