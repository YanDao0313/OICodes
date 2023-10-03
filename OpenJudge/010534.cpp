#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

long long n,temp=1,ans;

int main() {
	cin>>n;
	for (int i1=1; i1<=n; i1++) {
		temp=1;
		for (int i2=1; i2<=i1; i2++) {
			temp*=i2;
		}
		ans+=temp;
	}
	cout<<ans;
	return 0;
}
