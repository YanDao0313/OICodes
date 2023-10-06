#include <bits/stdc++.h>
using namespace std;

int m,mm,a,aa,k,l,ll;
string n,nn;

int main() {
	cin>>k>>n;
	l=n.length();
	a=atoi(n.c_str())/1;
	aa=atoi(n.c_str())*pow(10,l)%1;
	nn=to_string(aa);
	ll=nn.length();
	for (int i=0; i<l; i++) {
		m*=k;
		m+=n[i]-'0';
	}
	//for (int i=3; i<ll; i++) {
	//	mm*=k;
	//	m+=nn[i]-'0';
	//}
	
	cout<<m<<'.'<<mm;
	return 0;
}
