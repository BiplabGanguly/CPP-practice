#include <iostream>

using namespace std;

int main()
{
    int m;
    cin>>m;
    int n =1;
    for(int i=1; i<=m; i++){
        for(int k=i; k<=m-1; k++){
            cout<<"  ";
        }

        for(int j=1; j<=i; j++){
          cout<<j<<" ";
        }
         for(int j=i-1; j>0; j--){
          cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
