#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n,ans;

int main() {
	cin>>n;
	while (n!=0) {
		ans=ans*10+n%10;
		n/=10;
	}
	cout<<ans;
	return 0;
}
