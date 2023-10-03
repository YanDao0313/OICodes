#include <bits/stdc++.h>

using namespace std;

int n,a[10086],b[10086];

int main() {
	while (scanf("%d", &n) != EOF) {
		cin>>n;
		for (int i=1; i<=n; i++) {
			cin>>a[i];
		}
		for (int i=1; i<=n-1; i++) {
			b[i]=abs(a[i]-a[i+1]);
		}
		sort(b+0,b+n);
		for (int i=1; i<=n-1; i++) {
			if (b[i]!=i) {
				cout<<"Not jolly";
				return 0;
			}
		}
		cout<<"Jolly";
	}
	return 0;
}
