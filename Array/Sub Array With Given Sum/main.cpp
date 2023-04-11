#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int s;
    cin>>s;

    int start = 0;
    int end = 0;
    int sum = 0;

    for(int i=0; i<n; i++){
            sum += a[i];
        if(!(sum>s)){
            end = a[i+1];
        }
    }

    for(int i=0; i<n ;i++){
        if(end+a[i]<=s){
            start = a[i];
        }
    }

    cout<<start<<" " <<end;
    return 0;
}
