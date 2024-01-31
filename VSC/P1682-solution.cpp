#include <iostream>
#include <cstring>
#define MAXN 100000
using namespace std;
int n, m, k, f, pre[MAXN], num[MAXN], ans = 2147483647;
bool maps[500][500];
struct node {
    int from, to;
} edge1[MAXN], edge2[MAXN];
int find(int x) {
    return x == pre[x] ? x : pre[x] = find(pre[x]);
}
void merge(int x, int y) {
    int fx = find(x), fy = find(y);
    if (fx != fy) pre[fx] = fy;
}
int main() {
    cin >> n >> m >> k >> f;
    for (int i = 1; i <= n; i++) pre[i] = i;
    for (int i = 1; i <= m; i++) cin >> edge1[i].from >> edge1[i].to; // 女from 和 男to 从不吵架
    for (int i = 1; i <= f; i++) cin >> edge2[i].from >> edge2[i].to; // 女from 和 女to 是朋友
    for (int i = 1; i <= f; i++) merge(edge2[i].from, edge2[i].to);   // 朋友关系用并查集处理联通情况
    for (int i = 1; i <= m; i++)
        if (!maps[find(edge1[i].from)][edge1[i].to]) // 要记录每个联通快连接的不同编号的男生数目,用maps标记防止重复计数
            num[find(edge1[i].from)]++,              // 记录每个联通快的共享男生数目
                maps[find(edge1[i].from)][edge1[i].to] = true;
    for (int i = 1; i <= n; i++)
        if (num[i]) ans = min(ans, num[i]); // 取最小
    ans = min(ans + k, n);                  // 考虑k之后的答案,最大值有可能会超过n,这显然是不行的
    cout << ans << endl;
}
