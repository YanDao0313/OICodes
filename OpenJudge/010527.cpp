#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int k,n;
double Sn;

int main() {
	cin>>k;
	while (Sn<=k) {
		n++;
		Sn+=1.0/n;
	}
	cout<<n;
	return 0;
}
