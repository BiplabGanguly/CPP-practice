#include <bits/stdc++.h>
 using namespace std;

int main() {
	int n;
	cin>>n;
	int digit;
	int ans = 0;
	int i=0;
	while(n!=0){
		digit = (n&1);
		n = n >> 1;
		ans += (pow(10,i)*digit);
		i++;
	}
	cout<<ans<<endl;
	return 0;
}
