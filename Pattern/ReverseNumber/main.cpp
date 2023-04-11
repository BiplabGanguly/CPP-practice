#include <iostream>

using namespace std;

int main()
{
   // cout << "Hello world!" << endl;

   int number,sum=0;
   cout<<"enter a number: "<<endl;
   cin>>number;

   while(number>0){
    int remain = number%10;
    number = number /10;
    sum = sum * 10 + remain;
   }

   cout<<"reverse number is: "<<endl;
   cout<< sum;
    return 0;
}
