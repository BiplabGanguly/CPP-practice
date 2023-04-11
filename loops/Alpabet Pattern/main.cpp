#include <iostream>

using namespace std;

int main()
{
    for(int i=0; i<=6; i++){
        for(int j=0; j<=6-i; j++){
            char a = 65+j;
            cout<<a<<"  ";
        }
        if(i>=1){
            for(int s=1; s<=i*3; s++){
                cout<<"  ";
            }
            for(int j=6-i; j>=0; j--){
                char a = 65+j;
                cout<<a<<"  ";
            }
        }
        else{
              for(int j=6-i; j>=0; j--){
                char a = 65+j;
                cout<<a<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}
