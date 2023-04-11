#include <iostream>

using namespace std;

int main()
{
    int hrd,ts;
    float cc;
    cin>>hrd>>cc>>ts;

    if(hrd >50 && cc<0.7 && ts> 5600){
        cout<<"grade 10";
    }
    else if(hrd >50 && cc<0.7){
        cout<<"grade 9";
    }
    else if(cc<0.7 && ts> 5600){
        cout<<"grade 8";
    }
    else if(hrd >50 && ts> 5600){
        cout<<"grade 7";
    }
    else if(hrd >50 || cc<0.7 || ts> 5600){
        cout<<"grade 6";
    }
    else{
        cout<<"grade 5";
    }
    return 0;
}
