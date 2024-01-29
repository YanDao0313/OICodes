#include <bits/stdc++.h>
using namespace std;

priority_queue<long long, vector<long long>, greater<long long>> q;
int n, t;
long long ans;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &t);
        q.push(t);
    }
    while (q.size() > 1) {
        int t1 = q.top();
        q.pop();
        int t2 = q.top();
        q.pop();
        ans += (t1 + t2);
        q.push(t1 + t2);
    }
    cout << ans << endl;
    return 0;
}