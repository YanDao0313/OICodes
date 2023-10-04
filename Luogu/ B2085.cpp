#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n,sum=0;
bool flag;

int main() {
	cin>>n;
	for (int i1=2; n; i1++) {
		flag=1;
		for (int i2=2; i2*i2<=i1; i2++) {
			if (i1%i2==0) {
				flag=0;
				break;
			}
		}
		if (flag) {
			n--;
			sum=i1;
		}
	}
	cout<<sum;
	return 0;
}