#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n,a=1,b=1,sum=0;

int main() {
	cin>>n;
	for (int i=1; i<=n; i++) {
		sum+=a;
		if (a==b) {
			a++;
			b=1;
		} else {
			b++;
		}
	}
	cout<<sum;
	return 0;
}
