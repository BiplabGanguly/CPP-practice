#include <iostream>

using namespace std;

int main()
{
   // cout << "Hello world!" << endl;
   int n;
   cin>>n;

   for(int i=1; i<=n; i++){
    for(int j = 1; j<= n-i; j++){
        cout << "  ";
    }
    for(int k = 1; k<= n-1; k++){
        cout<<" * ";
    }
    cout<<endl;
   }
    return 0;
}
