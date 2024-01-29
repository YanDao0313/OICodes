// 瑞瑞的木板
#include <bits/stdc++.h>
using namespace std;

int n, t, x1, x2;
long long ans;
priority_queue<long long, vector<long long>, greater<long long>> a;

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &t);
        a.push(t);
    }
    for (int i = 1; i <= n - 1; i++) {
        x1 = a.top(), a.pop();
        x2 = a.top(), a.pop();
        ans += x1 + x2;
        a.push(x1 + x2);
    }
    cout << ans << endl;
    return 0;
}
