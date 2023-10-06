#include <bits/stdc++.h>
using namespace std;

long long a,b,c,t;

int main() {
	cin>>a>>b>>c;
	if (a>b) t=a,a=b,b=t;
	if (a>c) t=a,a=c,c=t;
	if (b>c) t=b,b=c,c=t;
	cout<<a<<' '<<b<<' '<<c;
	return 0;
}
