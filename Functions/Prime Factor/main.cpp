#include <iostream>
#include <vector>

using namespace std;

void primeFactor(int n){
    vector<int>factors;

    for(int i=2; i<=n; i++){
        while(n % i == 0){
            factors.push_back(i);
            n /= i;
        }
    }
    for(int i : factors){
        cout<<i<<" ";
    }
}

int main()
{
    int number;
    cin>>number;

    primeFactor(number);
    return 0;
}
