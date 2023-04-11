#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;
     int a = 2*n;
    for(int i =1; i<= n; i++){

        for(int j=1; j<=a-i; j++ ){
                cout<<" * ";
        }
        a--;
        cout<<endl;
    }
    return 0;
}
