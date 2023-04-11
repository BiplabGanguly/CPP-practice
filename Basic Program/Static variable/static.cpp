#include <bits/stdc++.h>
using namespace std;

const int scope = 12;
void update(){
     int static a =1;
     cout<<a<<endl;
     cout<<scope<<endl;
     a++;
}

int main(){
    const int a = 5;
    cout<<"const"<<a<<endl;
    cout<<scope<<endl;
    for(int i=0;i<5;i++){
           update();
    }
    return 0;
}