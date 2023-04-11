/*
4444444
4333334
4322234
4321234
4322234
4333334
4444444
*/



#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

   int a = n+(n-1);

   int arr[a][a];
   int start = 0;
   int end = a-1;

   while(n != 0){
    for(int i = start; i<=end; i++){
        for (int j= start; j<= end; j++){
            if(i==start || i == end || j==start || j== end){
                arr[i][j] = n;
            }
        }
    }
    ++start;
    --n;
    --end;
   }

   for(int i=0;i<a;i++){
    for(int j=0;j<a; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
   }

    return 0;
}
