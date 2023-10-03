#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int n,a,b;
double x,y,s1,s2;

int main() {
	scanf("%d",&n);
	scanf("%d %d",&a,&b);
	x=(double)b/a;
	for(int i=1; i<=n-1; i++) {
		scanf("%d %d",&a,&b);
		y=(double)b/a;
		s1=(double)y-x*1.0;
		s2=(double)x-y*1.0;
		if(s1>0.05) {
			cout<<"better"<<endl;
		} else if(s2>0.05) {
			cout<<"worse"<<endl;
		} else {
			cout<<"same"<<endl;
		}
	}
	return 0;
}
