#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n,temp,sum=0;

int main() {
	cin>>n;
	for (int i=1; i<=n; i++) {
		temp=i;
		while (temp!=0) {
			if (temp%10==1) sum++;
			temp/=10;
		}
	}
	cout<<sum;
	return 0;
}
