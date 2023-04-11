#include <iostream>
#include <math.h>

using namespace std;

int b2d(int num){
    int s=0;
    int i = 0;
    while(num>0){
       int rem = num % 10;
        s = s + rem*pow(2,i);
        num = num /10;
        i++;
    }
    return s;
}

int main()
{
   // cout << "Hello world!" << endl;
   int num;
    cin>>num;
   int con = b2d(num);
   cout<<con;
    return 0;
}
