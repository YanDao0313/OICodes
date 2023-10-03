#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n,a,b,ans,sum;

int main() {
	cin>>n;
	for (int i=1; i<=n; i++) {
		cin>>a>>b;
		if (a>=90&&a<=140&&b>=60&&b<=90) {
			sum++;
			if (sum>ans) ans=sum;
		} else {
			sum=0;
		}
	}
	cout<<ans;
	return 0;
}
