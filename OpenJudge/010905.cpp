#include<bits/stdc++.h>
using namespace std;

int maxx=-10086,minn=10086,m,temp;

int main() {
	cin>>m;
	for (int i=0; i<m; i++) {
		cin>>temp;
		if (temp>maxx) maxx=temp;
		if (temp<minn) minn=temp;
	}
	cout<<maxx-minn;
	return 0;
}