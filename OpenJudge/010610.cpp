#include <bits/stdc++.h>
using namespace std;

//long long a,b,sum;
char a[202],b[202],c[202];
int la,lb,lc,x,y,s; //lx×Ö·û³¤¶È£¬xys¹ý³ÌÁ¿ 
bool d=1; //Ä¬ÈÏÓÐÇ°µ¼0 

int main() {
	//cin>>a>>b;
	//sum=(long long)a+b; //This is WRONG!!!
	//cout<<sum; //»áÕ¨
	
	//Reference
	//https://www.cnblogs.com/caiyishuai/p/8325885.html
	//https://www.runoob.com/cplusplus/cpp-arrays.html
	//https://www.runoob.com/cplusplus/cpp-strings.html
	 
	cin>>a;
	cin>>b;
	la=strlen(a);
	lb=strlen(b);
	lc=max(la,lb);
	if (la>=lb) { //ÈÃÁ½¸ö×Ö·ûÊý×éµÄÎ»ÊýÏàÍ¬£¬¶ÌµÄ²¹0 
		for (int i=0; i<=la-lb-1; i++) c[i]='0';
		for (int i=la-lb; i<la; i++) c[i]=b[i-(la-lb)];

	} else if (lb>la) {
		for (int i=0; i<=lb-la-1; i++) c[i]='0';
		for (int i=lb-la; i<lb; i++) c[i]=a[i-(lb-la)];
		for (int i=0; i<lb; i++) a[i]=b[i];
	} //×¢Òâ£¬ÈÃaÓëcÏà¼Ó£¬b´æ·Å×îÖÕ´ð°¸ 
	memset(b, 0, sizeof(0));
	for (int i=lc-1; i>=0; i--) { //´Ó¸öÎ»¿ªÊ¼¼Ó 
		s=c[i]-'0'+a[i]-'0'+x; //²»¼Ó'0'»áWA 
		x=0; //×¢ÒâÇåÁãÓë½øÎ» 
		if (s>=10) {
			x=s/10; //x>>Òª½øÎ»µÄÊý£¬×¢Òâ 
			b[i]=s%10+'0';
		} else b[i]=s+'0';
	}
	if (x!=0) { //×îºóµÄx¾Í³ÉÎªÁË×î¸ßÎ»µÄÊý 
		cout<<x;
		for (int i=0; i<lc; i++) cout<<b[i];
	} else {
		for (int i=0; i<lc; i++) {
			if (d==0) cout<<b[i];
			if (d==1&&b[i]!='0') { //ÅÐ¶ÏÓÐÎÞÇ°µ¼0 
				d=0;
				cout<<b[i];
			}

		}
	}
	return 0;
}