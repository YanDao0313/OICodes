#include <bits/stdc++.h>
#define ll long long
#define R register int
#define AC return 0 // define大法好
using namespace std;
ll he, ta = 1, cnt, n, m, s, t, a, b, c, team[9876054], head[200000], f[200000];
bool pd[200000];
struct edge {
    ll next, to, dis;
} e[200000];
inline void add(ll from, ll to, ll di) // 基本的邻接表存图
{                                      // 刚理解时感觉毁三观，打多了也就顺溜了
    e[++cnt].next = head[from];        // next:兄弟，你从哪来？  head[]便是答案
    e[cnt].to = to;                    // to:兄弟，你要去哪？    to来解答
    e[cnt].dis = di;                   // dis:兄弟，路途多远？   di来解答
    head[from] = cnt;                  // cnt:兄弟，别忘回家！   head[]就记住了家的位置
}
int main() {
    cin >> n >> m >> s >> t; // scanf跑的快，cin写得快
    for (R i = 1; i <= m; i++) {
        cin >> a >> b >> c;
        add(a, b, c);
        add(b, a, c); // 双向存边噢！
    }
    for (R i = 1; i <= n; i++) f[i] = 1e9;
    f[s] = 0;
    team[1] = s, pd[s] = 1;
    do { // SPFA板子部分，相信各位都会打
        he++;
        ll x = team[he];
        pd[x] = 0;                            // 出队，以后可能还用得着
        for (R i = head[x]; i; i = e[i].next) // 特别喜欢这个for循环，感觉特别巧妙……
        {
            ll y = e[i].to, dist = max(f[x], e[i].dis); // 因为是找最大拥挤值，所以比较出发点和边的权值
            if (f[y] > dist) {
                f[y] = dist;
                if (!pd[y]) // 在队列中的点千万不要入队，不然复杂度爆炸
                {
                    team[++ta] = y;
                    pd[y] = 1;
                }
            }
        }
    } while (he < ta);
    cout << f[t]; // 输出终点的最短路就好了呀
    AC;           // AC优化（逃
}
