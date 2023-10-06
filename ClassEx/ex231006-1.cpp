#include <bits/stdc++.h>
using namespace std;

int n,a[10086],cnt;

int main() {
	cin>>n;
	while (true) {
		a[cnt]=n%2;
		n/=2;
		if (n==0) break;
		cnt++;
	}
	for (int i=cnt; i>-1; i--) cout<<a[i];
	return 0;
}
