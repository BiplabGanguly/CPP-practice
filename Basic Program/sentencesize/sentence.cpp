#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v;
    string words[7] = {"This", "is", "an", "example", "of", "text", "justification."};
    int maxlen = 16;
    string result;
    int space = 1;
    int total = 0;
    for(int i=0;i<7;i++){
        int len = words[i].length();
        total += len + space;
        if(total <= maxlen){
            result += words[i]+" ";
        }
        else{
            v.push_back(result);  
            cout<<i<<endl;
            result = "";
            total = 0;
            i--;
        }
       
    }
    v.push_back(result);

   for(int i=0;i<v.size();i++){
    cout<<v[i]<<endl;
   }
    
}