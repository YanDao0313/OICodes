#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int m,n,temp,sum;

int main() {
	cin>>n;
	int a[n];
	for (int i=0; i<n; i++) {
		cin>>temp;
		a[i]=temp;
	}
	cin>>m;
	for (int i=0; i<n; i++) {
		if (a[i]==m) sum++;
	}
	cout<<sum;
	return 0;
}