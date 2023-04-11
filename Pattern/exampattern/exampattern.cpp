#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin>>n;
int k = 0;
int l =0;
for(int i=1;i<=n;i+=2){
	l = i;
	for(int k= n ; k>=i;k-=2){
		cout<<"  ";
	}
	for(int j=1;j<=i+k;j+=2){
		if(l <= j ){
			cout<<l<<" ";
			l-=2;
		}
		else{
			cout<<j<<" ";	
		}
	}
	k+=2;
	cout<<endl;
}
// cout<<k<<endl;
int m = 0;
for(int i=n;i>=1;i-=2){
	l = i-2;
	for(int k= l;k<=n;k+=2){
		cout<<"  ";
	}
	for(int j=1;j<=i-m;j+=2){
		if(l <= j ){
			cout<<l<<" ";
			l-=2;
		}
		else{
			cout<<j<<" ";	
		}
	}
	 m+=2;
	cout<<endl;
}
return 0;
}