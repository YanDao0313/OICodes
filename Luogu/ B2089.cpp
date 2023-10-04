#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n;

int main() {
	cin>>n;
	int num[n];
	for (int i=0; i<n; i++) {
		cin>>num[i];
	}
	for (int i=n-1; i>=0; i--) {
		cout<<num[i]<<' ';
	}
	return 0;
}