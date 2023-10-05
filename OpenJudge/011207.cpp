#include <bits/stdc++.h>
using namespace std;

int n,m,q,cnt,l,r,w[1024],b[1024];

int main() {
	cin>>m>>n;
	l=0; r=0;
	for (int i=1; i<=n; i++) {
		cin>>q;
		if (w[q]==0) {
			cnt++; r++;
			b[r]=q;
			w[q]=1;
			if (r>m) {
				l++;
				w[b[l]]=0;
			}
		}
	}
	cout<<cnt;
	return 0;
}