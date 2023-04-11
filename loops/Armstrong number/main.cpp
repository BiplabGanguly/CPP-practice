#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int number;
    cin>>number;
    int storeNumber = number;

    int sum;
    while(number>0){
        int rem = number % 10;
        sum = sum + pow(rem,3);
        number = number / 10;
    }

    if(sum == storeNumber){
        cout<<"armstorng number";
    }
    else{
        cout<<"not";
    }

    return 0;
}
