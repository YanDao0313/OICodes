#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int m,k,t;

int main() {
	cin>>m>>k;
	if (m%19==0) {
		while (m!=0) {
			if (m%10==3) t++;
			m/=10;
		}
		if (t==k) {
			cout<<"YES";
		} else {
			cout<<"NO";
		}
	} else {
		cout<<"NO";
	}
	return 0;
}
