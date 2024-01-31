#include <bits/stdc++.h>
#define AC return 0
using namespace std;

int n, i, m, d[100010], u[100010], v[100010];
long long ans = 0;

int main() {
    cin >> n >> m;
    for (i = 0; i < m; i++) {
        scanf("%d%d", &u[i], &v[i]);
        d[u[i]]++, d[v[i]]++;
    }
    for (i = 0; i < m; i++) {
        if (d[u[i]] > 1 && d[v[i]] > 1)
            ans += (d[u[i]] - 1) * (d[v[i]] - 1) * 2;
    }
    cout << ans << endl;
    AC;
}