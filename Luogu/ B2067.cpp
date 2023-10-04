#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int m,n,temp,sum=0;

int main() {
	cin>>m>>n;
	for(int i=1; i<=n; i++) {
		cin>>temp;
		if (m>=temp) {
			m-=temp;
		} else {
			sum++;
		}
	}
	cout<<sum;
	return 0;
}