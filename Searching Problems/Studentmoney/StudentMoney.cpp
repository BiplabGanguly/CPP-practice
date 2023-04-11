#include <bits/stdc++.h>
using namespace std;

int main(){
    int no_of_student,total_money;
    cin>>no_of_student>>total_money;
    int student = 0;
    int count = 0;
    while(total_money > 0 && no_of_student > student){
        if(total_money - 8 == 4){
            total_money -= 7;
            student++;
        }
        else if(total_money < 8){
            student++;
            total_money = 0;
        }
        else{
            total_money -= 8;
            student++;
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}