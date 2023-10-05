#include <bits/stdc++.h>
using namespace std;

int i=-1;
long long a[110];

int main() {
	do{
		i++;
		cin>>a[i];
	} while (a[i]!=0);
	i--;
	for (int j=i; j>-1; j--) cout<<a[j]<<' ';
	return 0;
}
