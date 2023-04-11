#include <bits/stdc++.h>
using namespace std;

bool checkpalindome(int num){
    bool check = true;
    string str = to_string(num);
    int len =str.length(); 

    
    for(int i=0;i<len;i++){
        if(str[i] != str[len-1-i]){
            check = false;
        }
    }
    return check;
   
}

int main(){
    int num;
    cin>>num;
   bool c =  checkpalindome(num);
   
   if(c==true){
    cout<<"palindrome"<<endl;
   }
   else{
    cout<<"not palindrome"<<endl;
   }
    return 0;
}