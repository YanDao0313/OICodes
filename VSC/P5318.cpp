#include <bits/stdc++.h>
#define AC return 0
using namespace std;

int n, m, b[100010];
queue<int> q;
priority_queue<int, vector<int>, greater<int>> e[100010];
priority_queue<int, vector<int>, greater<int>> ee[100010];

void dfs(int x) {
    printf("%d ", x);
    while (!ee[x].empty()) {
        if (b[ee[x].top()] == 0) {
            int t = ee[x].top();
            b[t] = 1, ee[x].pop();
            dfs(t);
        }
    }
}

void bfs() {
    while (!q.empty()) {
        int x = q.front();
        q.pop();
        printf("%d", x);
        while (!e[x].empty()) {
            if (b[e[x].top()] == 0) {
                int t = e[x].top();
                b[t] = 1, e[x].pop();
                q.push(t);
            }
        }
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v;
        scanf("&d&d", &u, &v);
        e[u].push(v), ee[u].push(v);
    }
    b[1] = 1;
    dfs(1);
    printf("\n");
    memset(b, 0, sizeof(b));
    b[1] = 1, q.push(1);
    bfs();
    AC;
}
