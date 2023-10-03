#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n,temp,ans;

int main() {
	cin>>n;
	for (int i=1; i<=n; i++) {
		if (!(i%7==0||i%10==7||i/10%10==7)) ans+=i*i;
	}
	cout<<ans;
	return 0;
}
