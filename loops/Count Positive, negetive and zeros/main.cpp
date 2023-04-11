#include <iostream>

using namespace std;

int main()
{
    int size;
    cin>>size;

    int positiveCount=0, negetiveCount=0, zeroCount=0;
    for(int i=1; i<=size; i++){
            int num;
            cin>>num;

            if(num == 0){
                zeroCount++;
            }
            else if(num > 0){
                positiveCount ++;
            }
            else{
                negetiveCount++;
            }
    }

    cout<<positiveCount<<" "<<negetiveCount<<" "<<zeroCount<<endl;



    return 0;
}
