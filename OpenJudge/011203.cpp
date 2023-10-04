#include <bits/stdc++.h>
using namespace std;

int n,k,sum;
float temp;
string name;
void check(string,float,int&);

int main() {
	cin>>n;
	for (int i=0; i<n; i++) {
		cin>>name>>temp>>k;
		if (k==1) check(name,temp,sum);
	}
	cout<<sum;
	return 0;
}

void check(string nn,float t,int &s) {
	if (t>=37.5) {
		cout<<nn<<endl;
		s++;
	}
}