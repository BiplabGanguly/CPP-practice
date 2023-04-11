#include <iostream>

using namespace std;

int main()
{
   // cout << "Hello world!" << endl;

   int n;
   cin>>n;

   int k=0;

   for(int i=1;i<= n; i++){
    for(int j=1; j<=n-i; j++){
        cout<<"   ";
    }

    for(int j=1; j<= k+i ; j++){
        cout<<" * ";
    }
    k++;
    cout<<endl;
   }

   //Reverse ...........................

   int l=2*(n-1)-1;
      for(int i=n-1;i>= 1; i--){
    for(int j=1; j<=n-i; j++){
        cout<<"   ";
    }

    for(int j=1; j<= l ; j++){
        cout<<" * ";
    }
    l-=2;
    cout<<endl;
   }
    return 0;
}
