#include<bits/stdc++.h>
using namespace std;

int n,a[1000010];
stack<int> s;
long long ans;

int main() {
	cin>>n;
	for (int i=1; i<=n; i++) scanf("%d",&a[i]);
	a[++n]=1000010;
	for (int i=1; i<=n; i++) {
		while (!s.empty()&&a[i]>=a[s.top()]) {
			ans+=i-1-s.top();
			s.pop();
		}
		s.push(i);
	}
	printf("%lld",ans);
	return 0;
}