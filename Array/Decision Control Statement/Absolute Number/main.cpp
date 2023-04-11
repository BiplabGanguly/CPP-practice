#include <iostream>

using namespace std;

int main()
{
    int num;
    cin>>num;

    if(num<0){
        num = (-num);
    }

    cout<<num;
    return 0;
}
