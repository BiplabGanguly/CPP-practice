#include <iostream>
#include <string>
using namespace std;

void RomanConversion(int year){
        string s;

    while(year > 0){
        if(year >= 1000){
            year -= 1000;
            s.push_back('M');
        }
        else if(year >= 500){
            year -= 500;
            s.push_back('D');
        }
        else if(year >= 100){
            year -= 100;
            s.push_back('C');
        }
        else if(year >= 50){
            year -= 50;
            s.push_back('L');
        }
        else if(year >= 10){
            year -= 10;
            s.push_back('X');
        }
        else if(year >= 5){
            year -= 5;
            s.push_back('V');
        }
        else{
            year -= 1;
            s.push_back('I');
        }
    }

    cout<<s<<endl;

}


int main()
{
    int year;
    cin>>year;
    RomanConversion(year);
    return 0;
}
