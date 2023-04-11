#include <iostream>

using namespace std;

int main()
{
    float height,weight;

    cout<<"enter height(cen) and weight(kg) ::";
    cin>>height>>weight;

    float bmi = (weight/height/height)*10000;

    cout<<bmi;

    return 0;
}
