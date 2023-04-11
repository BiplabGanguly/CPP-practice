#include <iostream>

using namespace std;

int main()
{
    cout << ".....THERE ARE 21 MATCHSTICKS......" << endl;
    cout << "Note--you can take 1,2,3 or 4 match sticks." << endl;

    int matchSticks = 21;

    string userName;
    cout<<"Enter Your Name..: ";
    cin>>userName;
    int chance=1;

    int userTake,machineTake;
    while(matchSticks>0){
            if(chance%2 == 1){
                     cout<<userName<<" take your matchsticks :"<<endl;
                     cin>>userTake;
                     if(matchSticks == 1 && userTake == 1){
                        cout<<"you lose!!!";
                        return 0;
                    }
                    if(userTake <= 4){
                        matchSticks -= userTake;
                        cout<<"now there are "<<matchSticks<<" match sticks"<<endl;
                    }
                    else{
                        cout<<"can't take!!!"<<endl;
                    }

            }
            else{
                    machineTake = 5-userTake;
                    cout<<"Machine Take "<<machineTake<<" match sticks"<<endl;
                    matchSticks -= machineTake;
                    cout<<"now there are "<<matchSticks<<" match sticks"<<endl;

            }
            chance++;
    }
    return 0;
}
