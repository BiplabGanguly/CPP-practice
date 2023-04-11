#include <iostream>

using namespace std;

int sum(int n){
    if(n == 0){
        return 0;
    }
    int newN = sum(n-1)+n;
    return newN;
}

int main()
{
    int n;
    cin>>n;
    int r = sum(n);
    cout<<r<<endl;
    return 0;
}
