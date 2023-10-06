#include <bits/stdc++.h>
using namespace std;

int m=0,k,l,kk;
stack<int> s;
string n;

int main() {
	cin>>k>>n>>kk;
	l=n.length();
	for (int i=0; i<l; i++) {
		m*=k;
		m+=n[i]-'0';
	}
	while (m) {
		s.push(m%kk);
		m/=kk;
	}
	while (!s.empty()) {
		switch (s.top()) {
			case 10:
				cout<<'A';break;
			case 11:
				cout<<'B';break;
			case 12:
				cout<<'C';break;
			case 13:
				cout<<'D';break;
			case 14:
				cout<<'E';break;
			case 15:
				cout<<'F';break;
			default:
				cout<<s.top();break;
		}
		s.pop();
	}
	return 0;
}
