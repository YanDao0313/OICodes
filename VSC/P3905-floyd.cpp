#include <bits/stdc++.h>
#define AC return 0
using namespace std;

int n, m, k, s, f, h[105][105], d[105][105];

void floyd(int n) {
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                h[i][j] = min(h[i][j], h[i][k] + h[k][j]);
}

int main() {
    memset(h, 0x3f, sizeof(h));
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        cin >> u >> v >> d[u][v];
        d[v][u] = d[u][v];
        h[v][u] = h[u][v] = 0;
    }
    cin >> k;
    for (int i = 1; i <= k; i++) {
        int u, v;
        cin >> u >> v;
        h[u][v] = h[v][u] = d[u][v];
    }
    cin >> s >> f;
    floyd(n);
    cout << h[s][f] << endl;
    AC;
}
