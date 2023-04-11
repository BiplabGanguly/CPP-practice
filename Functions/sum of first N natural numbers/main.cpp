#include <iostream>

using namespace std;

int sum(int n){
    int s = (n*(n+1))/2;
    return s;
}

int main()
{
 //   cout << "Hello world!" << endl;
    int n;
    cin>>n;
    int num = sum(n);
    cout<<num;
    return 0;
}
