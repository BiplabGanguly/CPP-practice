#include <iostream>

using namespace std;

int power(int n, int p){
    if(p == 0){
        return 1;
    }
    int pow = power(n,p-1)*n;
    return pow;
}

int main()
{
    int n,p;
    cin>>n>>p;

    int r = power(n,p);
    cout<<r<<endl;
    return 0;
}
