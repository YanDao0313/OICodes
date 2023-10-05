#include<bits/stdc++.h>
using namespace std;

int a[10086],temp,cnt;

int main() {  
	for (int i=0; 1; i++) {
		cin>>temp;
		if (temp==0) break;
		else a[i]=temp;
		cnt++;
	}
	for (int i=cnt+1; i>0; i--) a[i]=a[i-1];
	a[0]=a[cnt];
	for (int i=0; i<cnt; i++) cout<<a[i]<<' ';
	return 0;  
}
