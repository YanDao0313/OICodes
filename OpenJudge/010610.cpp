#include <bits/stdc++.h>
using namespace std;

//long long a,b,sum;
char a[202],b[202],c[202];
int la,lb,lc,x,y,s; //lx字符长度，xys过程量 
bool d=1; //默认有前导0 

int main() {
	//cin>>a>>b;
	//sum=(long long)a+b; //This is WRONG!!!
	//cout<<sum; //会炸
	
	//Reference
	//https://www.cnblogs.com/caiyishuai/p/8325885.html
	//https://www.runoob.com/cplusplus/cpp-arrays.html
	//https://www.runoob.com/cplusplus/cpp-strings.html
	 
	cin>>a;
	cin>>b;
	la=strlen(a);
	lb=strlen(b);
	lc=max(la,lb);
	if (la>=lb) { //让两个字符数组的位数相同，短的补0 
		for (int i=0; i<=la-lb-1; i++) c[i]='0';
		for (int i=la-lb; i<la; i++) c[i]=b[i-(la-lb)];

	} else if (lb>la) {
		for (int i=0; i<=lb-la-1; i++) c[i]='0';
		for (int i=lb-la; i<lb; i++) c[i]=a[i-(lb-la)];
		for (int i=0; i<lb; i++) a[i]=b[i];
	} //注意，让a与c相加，b存放最终答案 
	memset(b, 0, sizeof(0));
	for (int i=lc-1; i>=0; i--) { //从个位开始加 
		s=c[i]-'0'+a[i]-'0'+x;
		x=0; //注意清零与进位 
		if (s>=10) {
			x=s/10; //x>>要放进去的数，注意进位 
			b[i]=s%10+'0';
		} else b[i]=s+'0';
	}
	if (x!=0) { //最后的x就成为了最高位的数 
		cout<<x;
		for (int i=0; i<lc; i++) cout<<b[i];
	} else {
		for (int i=0; i<lc; i++) {
			if (d==0) cout<<b[i];
			if (d==1&&b[i]!='0') { //判断有无前导0 
				f=0;
				cout<<b[i];
			}

		}
	}
	return 0;
}