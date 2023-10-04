#include <bits/stdc++.h>
using namespace std;

int cnt[100010]={0};
string w;

int main() {
	getline(cin, w);
	for (int i=0; i<w.length(); i++) {
		for (int j=i+1; j<w.length(); j++) {
			if (w[j]=w[i]) cnt[i]++;
		}
	}
	for (int i=0; i<w.length(); i++) {
		if (cnt[i]==0) {
			cout<<w[i];
			return 0;
		}
	}
	cout<<"no";
	return 0;
}