#include <bits/stdc++.h>
using namespace std;

string k,m,c;

int main() {
	getline(cin,k);
	getline(cin,c);
	for (int i=0; i<c.length(); i++) {
		int t=(k[i%k.length()]&31)-1;
		if ((c[i]&31)-t>0) c[i] = c[i]-t;
		else c[i] = c[i]-t+26;
	}
	//Reference: https://www.luogu.com.cn/blog/ingu/solution-p1079
	cout<<c;
	return 0;
}