#include <iostream>

using namespace std;


void fibo(int n){
    int num1=0, num2 = 1;
    for(int i=1; i<=n ; i++){
            cout<< num1 << "  ";
        int nxtnum = num1 + num2;
        num1 = num2;
        num2 = nxtnum;
    }
}

int main()
{
    //cout << "Hello world!" << endl;
    int n;
    cin>>n;

    fibo(n);
    return 0;
}
