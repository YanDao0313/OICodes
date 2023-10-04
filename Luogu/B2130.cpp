#include <bits/stdc++.h>
using namespace std;

int a,b,s,yuuka(char w,int a,int b);
char w;

int main() {
	cin>>a>>w>>b;
	cout<<yuuka(w,a,b);
	return 0;
}

int yuuka(char w,int a,int b) {
	if(w=='+') return a+b;
	else if(w=='-') return a-b;
	else if(w=='*') return a*b;
	else if(w=='/') return a/b;
	else return a%b;
}