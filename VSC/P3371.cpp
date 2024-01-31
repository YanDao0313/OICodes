#include <bits/stdc++.h>
#define AC return 0
using namespace std;

struct node {
    int v, w;
};
vector<bool> b;
vector<vector<node>> e;
int n, m, s, dis[100010];

void dijkstra(int n, int s) {
    memset(dis, 0x7f, sizeof(dis));
    dis[s] = 0;
    for (int i = 1; i <= n; i++) {
        int u = 0, mdis = 0x7fffffff;
        for (int j = 1; j <= n; j++)
            if (!b[j] && dis[j] < mdis)
                u = j, mdis = dis[j];
        b[u] = true;
        for (auto t : e[u]) { // 遍历某一容器中的所有元素的简便写法
            int v = t.v, w = t.w;
            if (dis[v] > dis[u] + w)
                dis[v] = dis[u] + w;
        }
    }
}

int main() {
    cin >> n >> m >> s;
    b.resize(m + 1, false); // 调整大小+初始化
    e.resize(m + 1);
    for (int i = 1; i <= m; i++) {
        int u, v, w;
        scanf("%d%d%d", &u, &v, &w);
        e[u].push_back((node){v, w});
    }
    dijkstra(n, s);
    for (int i = 1; i <= n; i++)
        printf("%d ", dis[i]);
    cout << endl; // For Debugging
    AC;
}