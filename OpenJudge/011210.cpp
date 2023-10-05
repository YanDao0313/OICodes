#include<bits/stdc++.h>
using namespace std;

int n;
bool flag=0,check(int);

int main() {
	cin>>n;
	for (int i=3; i<=n-2; i++) {
		if (check(i)&&check(i+2)) {
			flag=1;
			cout<<i<<" "<<i+2<<endl;
		}
	}
	if(flag==0) {
		cout<<"empty";
	}
	return 0;
}

bool check(int x) {
	for (int i=2; i*i<=x; i++) {
		if (x%i==0) return 0;
	}
	return 1;
}