#include <iostream>

using namespace std;
int main(){
            int size;
            cin>>size;
            int numbers[size];

        for(int i=0;i<size; i++){
        cin>>numbers[i];
        }

        int target;
        cin>>target;

        int l = 0;
        int r = size -1;


        while(l < r){
            if(numbers[l] + numbers[r] == target){

                cout<<numbers[l]<<numbers[r];
                return 0;
            }
            else if(numbers[l] + numbers[r] > target){
                r--;
            }
            else{
                l++;
            }
        }
        return 0;
    }

