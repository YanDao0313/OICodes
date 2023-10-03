#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

long long m,k,t=0;

int main() {
	cin>>m>>k;
	while (m!=0) {
		if (m%10==3) t++;
		m/=10;
	}
	if (t==k) {
		cout<<"YES";
	} else {
		cout<<"NO";
	}
	return 0;
}
