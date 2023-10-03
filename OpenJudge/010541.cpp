#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int L,R,temp,sum;

int main() {
	cin>>L>>R;
	for (int i=L; i<=R; i++) {
		temp=i;
		while (temp!=0) {
			if (temp%10==2) sum++;
			temp/=10;
		}
	}
	cout<<sum;
	return 0;
}
