#include <bits/stdc++.h>
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

int n, m, d, a, f, s, dis[100010], b[100010];
vector<edge> e[100010];
priority_queue<node, vector<node>, greater<node>> q;

void dijkstra(int n, int s) {
    memset(dis, 0x7f, sizeof(dis));
    dis[s] = 0;
    q.push((node){0, s});
    while (!q.empty()) {
        int u = q.top().u;
        q.pop();
        if (b[u])
            continue;
        b[u] = 1;
        for (auto t : e[u]) { // 遍历某一容器中的所有元素的简便写法
            int v = t.v, w = t.w;
            if (dis[v] > dis[u] + w) {
                dis[v] = dis[u] + w;
                q.push((node){dis[v], v});
            }
        }
    }
}

void del(int u, int v) {
    if (e[u].empty())
        return;
    edge t = e[u].back();
    e[u].pop_back();
    if (t.v == v) {
        e[u].push_back(t);
        return;
    } else {
        del(u, v);
        e[u].push_back((edge){t.v, 0});
    }
}

int main() {
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        e[u].push_back((edge){v, w});
        e[v].push_back((edge){u, w});
    }
    cin >> d;
    for (int i = 1; i <= d; i++) {
        int u, v;
        scanf("%d%d", &u, &v);
        del(u, v), del(v, u);
    }
    cin >> a >> f;
    dijkstra(n, a);
    cout << dis[f] << endl;
    AC;
}
