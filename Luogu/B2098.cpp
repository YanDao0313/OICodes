#include<bits/stdc++.h>
using namespace std;

int n,cnt[110]={0},t;

int main() {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>t;
		if (cnt[t]==0) {
			cout<<t<<' ';
			cnt[t]++;
		}
	}
	return 0;
}