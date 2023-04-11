#include <bits/stdc++.h>
using namespace std;

string adTwoBinary(string a, string b)
{
    string result;
    char carry = '0';
    for (int i = a.length()-1; i >=0; i--){
        if (a[i] == '1' && b[i] == '1'){
            if (carry == '1'){
                result.push_back('1');
                carry = '1';
                cout<<"check1"<<" "<<carry<<" ";
            }
            else{
                result.push_back('0');
                carry = '1';
                cout<<"check2"<<" "<<carry<<" ";
            }
        }
         else if ((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0')){
            if (carry == '1'){
                result.push_back('0');
                carry = '1';
                cout<<"check3"<<" "<<carry<<" ";
            }
            else{
                result.push_back('1');
                cout<<"check4"<<" "<<carry<<" ";
            }
        }
        else if (a[i] == '1' || b[i] == '1'){
            if (carry == '1'){
                result.push_back('0');
                cout<<"check5"<<" "<<carry<<" ";
            }
            else{
                result.push_back('1');
                cout<<"check6"<<" "<<carry<<" ";
            }
        }
        else if(a[i] == '0' && b[i] == '0'){
            if(carry == '1'){
                result.push_back('1');
                carry = '0';
            }
            else{
                result.push_back('0');
            }
          
        }
    }

       if (carry == '1'){
                result.push_back('1');
            }
           
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string str1;
    string str2;
    cin >> str1 >> str2;
    string r;
    if (str1.length() > str2.length())
    {
        int d = str1.length()  - str2.length();
        if(d>0){
        for(int i=0;i<d;i++){
            str2 = '0'+str2;
        }
        }
        r = adTwoBinary(str1, str2);
    }
    else
    {
        int d = str2.length()  - str1.length();
        if(d>0){
        for(int i=0;i<d;i++){
            str1 = '0'+str1;
        }
        }
        
        r = adTwoBinary(str2, str1);
    }

    cout<<str1<<" "<<str2<<endl;
    cout << r << endl;
}