#include <iostream>

using namespace std;

int main()
{
    char input;
    cin>>input;

    if(input>=48 && input<=57){
        cout<<"digit";
    }
    else if(input>= 65 && input<= 90){
        cout<<"capital letter";
    }
    else if(input>= 97 && input<= 122){
        cout<<"small letter";
    }
    else{
        cout<<"special character";
    }
    return 0;
}
