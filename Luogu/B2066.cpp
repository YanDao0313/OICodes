#include <bits/stdc++.h>
using namespace std;

int n,p;
double x,y;

int main(){
    cin>>n;
    double sum = 0;
    for (int i=1; i<=n; i++) {
        cin>>x>>y>>p;
        double dis=sqrt(x*x+y*y);
        sum+=dis/50+p+dis/50+p*0.5;
    }
    printf("%d",int(ceil(sum)));
    return 0;
}