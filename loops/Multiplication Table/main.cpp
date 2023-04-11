#include <iostream>

using namespace std;
void multiplicationTable(int number);

int main()
{
    int number;
    cin>>number;

    multiplicationTable(number);
    return 0;
}

 void multiplicationTable(int number){
       for(int i=1; i<=10; i++){
        cout<<number<<" "<<"*"<<" "<<i<<" "<<"="<<" "<<number*i<<endl;
    }
 }
