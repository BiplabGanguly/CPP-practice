#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
	int m = n;
	int k = 0;
	while(n!=0){
		k = (k<<1) | 1;
		n = n >> 1;
	}
	int ans = (~m) & k;
	cout<<ans<<endl;
    return 0;
}
