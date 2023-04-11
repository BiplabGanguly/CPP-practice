#include <iostream>

using namespace std;

int main()
{
    int n;
     cin>>n;

    int a[n];

    for(int j=0; j<n;j++){
        cin>>a[j];
    }

    int pd = a[1] - a[0];
    int i=2;
    int count= 2;
    int ans = 2;


    while(i<n){
           if(pd == a[i]-a[i-1]){
            count++;
           }
           else{
            pd = a[i]-a[i-1];
            count = 2;
           }
         ans = max(ans, count);
        i++;
    }

       cout<<ans;
    return 0;
}
