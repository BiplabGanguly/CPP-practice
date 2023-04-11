#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int sum = 0;

    for(int i=0;i<n;i++){
        sum += a[i];
    }

    int s = 0;
    for(int i=0; i<n; i++){
        int ml = sum /a[i];
        s= max(s,ml);
    }
    int input = sum /s;
    cout<<input;
    return 0;
}
