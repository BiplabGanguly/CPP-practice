#include <iostream>

using namespace std;

int main()
{
   // cout << "Hello world!" << endl;
   int n;
   cin>>n;
   int arr[n];

   for(int i=1; i<=n; i++){
        cin>>arr[i];
   }
   int maxNum = 0,minNum;

   for(int i=1; i<=n ;i++){
    if(arr[i] > maxNum){
        maxNum = arr[i];
        minNum = maxNum;
    }

   }
      for(int i=1; i<=n ;i++){
     if(arr[i] < minNum){
        minNum = arr[i];
    }

   }



   cout<<maxNum <<" " <<minNum;

    return 0;
}


//Time complexity --- 0(3n)
