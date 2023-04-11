#include <iostream>

using namespace std;

int decimalTObinary(int n){
    int x=1;
    int s =0;
    while(x<=n){
        x *= 2;
    }
    x /= 2;

    while(x>0){
        int last = n/x;
        n -= last*x;
        x /=2;
        s = s * 10 + last;
    }
    return s;
}

int main()
{
    int n;
    cin>>n;

   int num  = decimalTObinary(n);
   cout<<num;
    return 0;
}
