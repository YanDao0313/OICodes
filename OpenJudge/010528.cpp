#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n,ans;

int main() {
	cin>>n;
	ans=n%10;
	cout<<ans<<' ';
	for (int i=10; i<=n; i=i*10) {
		ans=(n%(i*10))/i;
		cout<<ans<<' ';
	}
	return 0;
}
