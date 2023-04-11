#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;

    int n,a=0;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(n%i==0){
            a++;
        }
    }

    if(a==2){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
    return 0;
}
