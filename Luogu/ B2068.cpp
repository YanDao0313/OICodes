#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n,a,g,s,b,q,sum;

int main() {
	cin>>n;
	for (int i; i<n; i++) {
		cin>>a;
		g=a%10;
		s=(a%100-g)/10;
		b=(a%1000)/100;
		q=a/1000;
		if (g-q-b-s>0) sum++;
	}
	cout<<sum;
	return 0;
}