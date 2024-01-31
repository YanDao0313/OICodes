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

int n, m, s, dis[100010], b[100010];
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

int main() {
    cin >> n >> m >> s;
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        e[u].push_back((edge){v, w});
    }
    dijkstra(n, s);
    for (int i = 1; i <= n; i++)
        printf("%d ", dis[i]);
    cout << endl; // For Debugging
    AC;
}