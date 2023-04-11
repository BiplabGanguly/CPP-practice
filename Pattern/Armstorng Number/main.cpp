#include <iostream>
#include<math.h>

using namespace std;

int main()
{
  //  cout << "Hello world!" << endl;

    int number,sum=0;

    cout<<"enter a number: ";
     cin>>number;


    int n = number;


    while(n){
        int remain = n%10;

        sum = sum + pow(remain, 3);

        n = n/10;

    }

    cout<<sum;
    if(sum == number){
              cout<<endl;
        cout<<"armstorng";
    }
    else{
          cout<<endl;
        cout<<"not";
    }
    return 0;
}
