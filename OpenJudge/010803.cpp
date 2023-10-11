#include<bits/stdc++.h>
using namespace std;

int m,n,temp,sum;

int main() {
	cin>>m>>n;
	for (int i=0; i<m; i++)
		for (int j=0; j<n; j++) {
			cin>>temp;
			if ((i==0||i==m-1)||(j==0||j==n-1))
				sum+=temp;
		}
	cout<<sum;
	return 0;
}