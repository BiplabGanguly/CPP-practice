#include <bits/stdc++.h>
using namespace std;

void printData(int *a){
    cout<<*a<<endl;
}

int main(){
    int a = 6;
    int *p = &a;
    printData(p);
    printData(&a);
    return 0;
}
