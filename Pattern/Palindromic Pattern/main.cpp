#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1; j<= n-i; j++){
            cout<<"  ";
        }
        for(int k=i; k>=1; k--){
            cout<<k<<" ";
        }
        if(i>=2){
        for(int l=2; l<=i;l++){
            cout<<l<<" ";
        }
        }
        cout<<endl;
    }
    return 0;
}
