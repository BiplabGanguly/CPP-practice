#include <iostream>

using namespace std;

int main()
{
    int cp,sp;
    cin>>cp>>sp;

    int result;
    string state;
    if(cp>sp){
        state = "loss";
        result = cp-sp;
    }
    else if(cp<sp){
        state = "profit";
        result = sp-cp;
    }
    else{
        state = "same";
        result = cp;
    }

    cout<<state<<" "<<result;
    return 0;
}
