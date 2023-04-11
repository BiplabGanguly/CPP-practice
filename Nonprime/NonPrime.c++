#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,s=1,k;
    cout<<"Enter n: ";
    cin>>n;

    int i=1;
    while(i<=n){
        if(s ==1 || s==2 || s==3 || s==5){
            s++;
            i++;
        }
        else{
            k=s;
            while(k>1){
                if(k%2 == 0){
                    k /= 2;
                }
                else if(k%3 == 0){
                    k /= 3;
                }
                else if(k%5 == 0){
                    k /= 5;
                }
                else{
                    i--;
                    break;
                }
            }
            s++;
            i++;
        }
    }
    cout<<s-1<<endl;
  
    return 0;
}