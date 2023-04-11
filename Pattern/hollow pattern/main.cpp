#include <iostream>

using namespace std;

int main()
{
     int row, column;

    cin>> row>>column;
    for(int i =1; i<= row; i++){
        for(int j=1; j<= column; j++){
            if(i ==1 || i== 5){
                cout<<" * ";
            }
            else if(j==1 || j== 4)
            {
                cout<<" * ";
            }
            else{
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    return 0;
}
