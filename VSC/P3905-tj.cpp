#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> PI;
int n, m, a, b, d;
int Min[118], c[118][118];
bool vis[118], xc[118][118];

void dijkstra(int st) {
    priority_queue<PI, vector<PI>, greater<PI>> q;
    q.push(PI(0, st));
    Min[st] = 0;
    while (!q.empty()) {
        int x = q.top().second;
        q.pop();
        if (vis[x]) continue;
        vis[x] = 1;
        for (int i = 1; i <= n; i++)
            if (Min[i] > Min[x] + c[i][x]) {
                Min[i] = Min[x] + c[i][x];
                q.push(PI(Min[i], i));
            }
    }
}
int main() {
    scanf("%d%d", &n, &m);
    memset(c, 0x7f7f7f, sizeof(c));
    memset(Min, 0x7f7f7f, sizeof(Min));
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        xc[u][v] = xc[v][u] = 1;
        c[u][v] = c[v][u] = w;
    }
    scanf("%d", &d);
    for (int i = 1; i <= d; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        xc[u][v] = xc[v][u] = 0;
    }
    for (int i = 1; i <= n; i++)
        for (int j = 1; j < i; j++)
            if (xc[i][j]) c[i][j] = c[j][i] = 0;
    scanf("%d%d", &a, &b);
    dijkstra(a);
    printf("%d\n", Min[b]);
    return 0;
}
