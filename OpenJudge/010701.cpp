#include <bits/stdc++.h>
using namespace std;

int cnt;
string w;

int main() {
	//cin>>words; 需要整行读入？
	string w;
	getline(cin, w);
	for (int i=0; i<w.length(); i++) cnt+=isdigit(w[i]);
	cout<<cnt;
	return 0;
}