#include<bits/stdc++.h>
using namespace std;

int n,i,j,m,k,temp,d[1024];
void check(int a[], int l) {
	bool flag=0;
	sort(d,d+n);
	for (k=n; k>=0; k--) {
		for (i=1; i<=k-3; i++) {
			for (j=i+1; j<=k-2; j++) {
				for(m=j+1; m<=k-1; m++) {
					if(a[k]==a[m]+a[i]+a[j]) {
						flag=1;
						break;
					}
				}
				if(flag) break;
			}
			if(flag) break;
		}
		if(flag) break;
	}
	if(flag) cout<<a[k]<<endl;
	else cout<<"no solution"<<endl;
}

int main() {
	cin>>n;
	temp=n;
	while (temp!=0) {
		n=temp;
		for (i=0; i<n; i++) cin>>d[i];
		check(d,n);
		cin>>temp;
	}
	return 0;
}
