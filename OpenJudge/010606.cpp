#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int l,m,u,v,cnt=0,tree[10086];

int main() {
	cin>>l>>m;
	for (int i=1; i<=m; i++) {
		cin>>u>>v;
		for (int j=u; j<=v; j++) {
			tree[j]=1;
		}
	}
	for (int i=0; i<=l; i++) {
		if(tree[i]==0) cnt++;
	}
	cout<<cnt;
	return 0;
}
