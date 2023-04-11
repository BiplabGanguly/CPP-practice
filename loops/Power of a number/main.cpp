#include <iostream>

using namespace std;

int main()
{
    int n;
    int pow;

    cin>>n>>pow;

    int s=1;
    for(int i=1; i<=pow; i++){
        s = s * n;
    }

    cout<<s;
    return 0;
}
