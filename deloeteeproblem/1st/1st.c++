#include <bits/stdc++.h>
using namespace std;
int main() {
  
  int t;
  cin>>t; 
  int count = 0;
  while(t--){
    string str;
    cin>>str;
      int n = 0;
      int i=0;
    while(i<2){
      n = n*10+ (str[11+i]-'0');
      i++;
    }
    if(n > 60){
    count++;
   }
  }
  cout<<count;
  return 0;
}
