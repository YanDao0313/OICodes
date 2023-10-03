#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int k,a1=1,a2=1,a3;

int main() {
	cin>>k;
	if(k==1||k==2) {
		a3=1;
	} else {
		for(int i=1; i<=k-2; i++) {
			a3=a1+a2;
			a1=a2;
			a2=a3;
		}
	}
	cout<<a3;
	return 0;
}
