#include <bits/stdc++.h>
using namespace std;

void callbyvalue(int k){
    k = 12;
}

void callbyreference(int *p){
    *p = 14;
}

int main()
{
    int a = 6;
    // int *p = &a;
    // cout << typeid(a).name()<<endl;
    // cout << typeid(p).name()<<endl;
    // *p = 12;
    // cout<<a<<endl;

    cout<<a<<endl; //before any function call

    callbyvalue(a);
    cout<<a<<endl;  // after call by value

    callbyreference(&a);
    cout<<a<<endl;  //after call by reference

    float z = 12;
    float *pz = 0;
    pz = &z;
    cout<<pz<<endl;
    cout<<pz+1<<endl;
    cout<<sizeof(pz)<<endl;
    cout<<sizeof(z)<<endl;


    // cout<<"int ="<<sizeof(int)<<endl;
    // cout<<"float ="<<sizeof(float)<<endl;
    // cout<<"double ="<<sizeof(double)<<endl;
    // cout<<"long ="<<sizeof(long)<<endl;
    // cout<<"short ="<<sizeof(short)<<endl;
    // cout<<"char ="<<sizeof(char)<<endl;
    // cout<<"long int ="<<sizeof(long int)<<endl;
    // cout<<"long long int ="<<sizeof(long long int)<<endl;
    // cout<<"un int ="<<sizeof(unsigned int)<<endl;
    // cout<<"un long ="<<sizeof(unsigned long)<<endl;
    // cout<<"pointer = "<<sizeof(int*)<<endl;
}