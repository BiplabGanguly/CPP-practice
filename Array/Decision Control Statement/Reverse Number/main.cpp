#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a = n;

    int s=0;
    while(n>0){
        int rem = n%10;
        s = s*10 + rem;
        n = n/10;
    }

    cout<<s<<endl;

    if(a==s){
        cout<<"numbers are same...";
    }
    return 0;
}
