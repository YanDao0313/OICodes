#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n,temp,ans;

int main() {
	cin>>n;
	for (int i=0; n!=0; i++) {
		ans+=n%2*pow(10,i);
		n/=2;
	}
	cout<<ans;
	return 0;
}
