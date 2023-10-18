#include<bits/stdc++.h>
using namespace std;

int n,k;
struct stu {
	int id;
	double grade;
} s[110];
//double grade[110];
//bool done;

bool cmp(stu a, stu b) {
	return a.grade>b.grade;
}

int main() {
	cin>>n>>k;
	/*for (int i=1; i<=n; i++) {
		cin>>num[i]>>grade[i];
	}
	for (int i=n; i>1; i--) {
		done=true;
		for (int j=1; j<i; j++) {
			if (grade[j]<grade[j-1]) {
				swap(grade[j],grade[j-1]);
				swap(num[j],num[j-1]);
				done=false;
			}
		}
		if (done) break;
	}
	printf("%d %g",num[k],grade[k]);*/
	for (int i=0; i<n; i++) cin>>s[i].id>>s[i].grade;
	sort (s,s+n,cmp);
	printf("%d %g",s[k-1].id,s[k-1].grade);
	return 0;
}