#include <iostream>

using namespace std;

int main()
{
    int n=1;
    for(int i=1; i<=4; i++){

        for(int k=1;k<=(4-i); k++){
            cout<<" ";
        }

        for(int j=1; j<=i; j++){
                cout<<n<<" ";
                n++;
        }
        cout<<endl;
    }



    return 0;
}