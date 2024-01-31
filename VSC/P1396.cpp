#include <bits/stdc++.h>
#define AC return 0
using namespace std;

struct node {
    long long next, to, dis;
} a[200010];

long long n, m, s, t, l = 0, r = 1, cnt, head[200010], ans[200010], spft[10000010];
bool b[200010];

void add(long long from, long long to, long long dis) // 邻接表存图
{
    a[++cnt].next = head[from];
    a[cnt].to = to;
    a[cnt].dis = dis;
    head[from] = cnt;
}

int main() {
    cin >> n >> m >> s >> t;
    for (register int i = 1; i <= m; i++) {
        long long a, b, c;
        scanf("%lld%lld%lld", &a, &b, &c);
        add(a, b, c), add(b, a, c);
    }
    for (register int i = 1; i <= n; i++)
        ans[i] = 1e9;
    ans[s] = 0, spft[1] = s, b[s] = 1;
    do {
        l++;
        long long x = spft[l];
        b[x] = 0;
        for (register int i = head[x]; i; i = a[i].next) {
            long long y = a[i].to, tt = max(ans[x], a[i].dis);
            if (ans[y] > tt) {
                ans[y] = tt;
                if (!b[y]) {
                    spft[++r] = y;
                    b[y] = 1;
                }
            }
        }
    } while (l < r);
    cout << ans[t] << endl;
    AC;
}