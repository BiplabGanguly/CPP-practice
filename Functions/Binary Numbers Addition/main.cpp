#include <iostream>

using namespace std;

int rev(int n){
    int ans = 0;
    while(n>0){
    int rem = n %10;
     ans = ans * 10 + rem;
     n /= 10;
    }
    return ans;
}

Binary_addition(int a, int b){
    int s = 0;
    int carry = 0;
    while(a>0 && b>0){
        if(a%2 == 0 && b%2 == 0){
            s =s*10+ carry;
            carry = 0;
        }
        else if((a%2 == 0 && b%2 == 1) || (a%2 == 1 && b%2 == 0)){
            if(carry == 0){
                s = s* 10 + 1;
                carry = 0;
            }
            else{
                  s = s* 10 + 0;
                carry = 1;
            }
        }
        else{
         s =s*10+ carry;
            carry = 1;
        }
        a /= 10;
        b /= 10;
    }

    while(a>0){
        if(carry == 1){
          if(a%2 ==1 ){
            s = s*10 +0;
            carry = 1;
          }
        else{
            s = s*10+1;
            carry = 0;

        }
    }
    else{
            s = s*10+ (a%2);
        }
        a/=10;
    }

while(b>0){
    if(carry == 1){
        if(b%2 ==1 ){
            s = s*10 +0;
            carry = 1;
        }
        else{
            s = s*10+1;
            carry = 0;

        }
    }
    else{
            s = s*10+ (b%2);
    }
        b/=10;
    }

    if(carry == 1){
        s = s*10 + 1;
    }
    s = rev(s);
    return s;
}


int main()
{
   // cout << "Hello world!" << endl;
   int num1,num2;
   cin>>num1>>num2;

   int result = Binary_addition(num1, num2);
   cout<<result;
    return 0;
}
