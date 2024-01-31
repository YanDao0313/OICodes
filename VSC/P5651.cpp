#include <bits/stdc++.h> // 结果这题是生成树，还没学，bye bye
#define AC return 0
using namespace std;

struct edge {
    int v, w;
};
struct node {
    int dis, u;
    bool operator>(const node a) const {
        return dis > a.dis;
    }
};

int n, m, Q, x, y, dis[100010], b[100010];
vector<edge> e[100010];
priority_queue<node, vector<node>, greater<node>> q;

void dijkstra(int n, int s) {
    memset(b, 0, sizeof(b));
    memset(dis, 0x7f, sizeof(dis));
    dis[s] = 0;
    q.push((node){0, s});
    while (!q.empty()) {
        int u = q.top().u;
        q.pop();
        if (b[u])
            continue;
        b[u] = 1;
        for (auto t : e[u]) {
            int v = t.v, w = t.w;
            if (dis[v] > dis[u] + w) {
                dis[v] = dis[u] + w;
                q.push((node){dis[v], v});
            }
        }
    }
}

int main() {
    cin >> n >> m >> Q;
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        e[u].push_back((edge){v, w});
        e[v].push_back((edge){u, w});
    }
    for (int i = 1; i <= Q; i++) {
        scanf("%d%d", &x, &y);
        dijkstra(n, x);
        printf("%d\n", dis[y]);
    }
    AC;
}