#include <iostream>

using namespace std;

int main()
{
   // cout << "Hello world!" << endl;

   int n;
   cin>>n;

   for(int i =n; i>= 1; i-=1){
    for(int j=1; j<=i;j++){
        cout<<j;
    }
    cout<<endl;
   }
    return 0;
}
