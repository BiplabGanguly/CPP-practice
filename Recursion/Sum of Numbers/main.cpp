#include <iostream>

using namespace std;

int sum(int n, int count){
    count++;
    int a;
    cin>>a;
     n = n+a;
    if(count == 5){
        return n;
    }
    sum(n,count);
}

int main()
{
    int count=1;
    int n;
    cin>>n;

  int result= sum(n , count);
  cout<<result;
    return 0;
}
