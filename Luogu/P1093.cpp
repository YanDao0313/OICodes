#include<bits/stdc++.h>
using namespace std;

struct stu {
	int num;
	int c,m,e;
	int sum;
} s[310];

bool cmp(stu a,stu b) {
	if(a.sum>b.sum) return 1;
	else if(a.sum<b.sum) return 0;
	else {
		if(a.c>b.c) return 1;
		else if(a.c<b.c) return 0;
		else {
			if(a.num>b.num) return 0;
			else return 1;
		}
	}
}
int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) {
		s[i].num=i;
		cin>>s[i].c>>s[i].m>>s[i].e;
		s[i].sum=s[i].c+s[i].m+s[i].e;
	}
	sort(s+1,s+1+n,cmp);
	for(int i=1; i<=5; i++)
		cout<<s[i].num<<' '<<s[i].sum<<endl;
	return 0;
}