#include <iostream>

using namespace std;

int main()
{
    int side1,side2,side3;
    cin>>side1>>side2>>side3;

    if(side1>side2 && side1>side3){
        if(side2+side3 > side1){
            cout<<"valid triangle";
        }
        else{
            cout<<"not valid";
        }
    }
    else if(side2>side1 && side2>side3){
             if(side1+side3 > side2){
            cout<<"valid triangle";
        }
        else{
            cout<<"not valid";
        }
    }
    else {
                 if(side1+side2 > side3){
            cout<<"valid triangle";
        }
        else{
            cout<<"not valid";
        }
    }


    return 0;
}
