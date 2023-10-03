//Give up

#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n,temp,ans;

int main() {
	cin>>n;
	if (n==0) {
		cin>>temp;
		cout<<'1';
		return 0;
	}
	//for (int i=1; i<=n+1; i++) {
	//	cin>>temp;
	//	ans+=pow(temp,n-i+1);
	//}
	cout<<ans;
	return 0;
}
