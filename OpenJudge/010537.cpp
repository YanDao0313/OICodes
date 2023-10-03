#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int m,n,x,xp;

int main() {
	cin>>m>>n>>x;
	while (x>0) {
		x-=1;
		xp+=n;
		if (xp>=m) {
			xp=0;
			n+=m/n;
		}
	}
	cout<<n;
	return 0;
}
