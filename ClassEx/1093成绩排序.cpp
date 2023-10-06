#include<bits/stdc++.h>
using namespace std;

int n,id[5050],grade[5050];

int main() {
	cin>>n;
	for (int i=1; i<=n; i++) cin>>id[i]>>grade[i];
	for (int i=1; i<=n; i++) {
		for (int j=i; j<=n-i+1; j++) {
			if (grade[j]>grade[j+1]) {
				swap(grade[j],grade[j+1]);
				swap(id[j],id[j+1]);
			}
		}
	}
	for (int i=1; i<=n; i++)
		printf("%d %d\n",id[i],grade[i]);
	return 0;
}
