#include <bits/stdc++.h>
using namespace std;

int cnt;
string x,words;

int main() {
	getline(cin,x);
	getline(cin,words);
	for (int i=0; i<x.length(); i++) {
		x[i]=tolower(x[i]);
	}
	for (int i=0; i<words.length(); i++) {
		words[i]=tolower(words[i]);
	}
	x=' '+x+' ';
	words=' '+words+' ';
	if (words.find(x)==string::npos) {
		cout<<"-1";
	} else {
		int m=words.find(x),n=words.find(x);
		while (n!=string::npos) {
			cnt++;
			n=words.find(x,n+1);
		}
		printf("%d %d",cnt,m);
	}
	return 0;
}