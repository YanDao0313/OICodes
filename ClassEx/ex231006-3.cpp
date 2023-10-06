#include <bits/stdc++.h>
using namespace std;

int m=0,k,l;
string n;

int main() {
	cin>>k>>n;
	l=n.length();
	for (int i=0; i<l; i++) {
		m*=k;
		m+=n[i]-'0';
	}
	cout<<'('<<n<<')'<<k<<"=("<<m<<")10";
	return 0;
}
