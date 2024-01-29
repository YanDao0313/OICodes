#include <bits/stdc++.h>
using namespace std;

#define inf 0x7f
int ans[200005][2], sum = 0;
struct node {
    int l, r, cha, num;
    bool judge;
} a[200005];

bool operator<(node rr, node ll) {
    int lll = abs(ll.cha), rrr = abs(rr.cha); // 优先队列有限法则
    if (rrr != lll)
        return lll < rrr;
    else
        return ll.num < rr.num;
}

priority_queue<node> q;

int main() {
    int n, now, next, t = 0;
    char x;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        cin >> x;
        if (x == 'B')
            a[i].judge = 0;
        else
            a[i].judge = 1;
    }
    scanf("%d", &now);
    for (int i = 1; i < n; i++) {
        scanf("%d", &next);
        a[i].num = i;
        a[i].cha = next - now;
        a[i].l = i - 1;
        a[i].r = i + 1;
        q.push(a[i]);
        now = next;
    }
    a[n].r = n + 1;
    a[n].num = n;
    a[n].cha = inf;
    while (!q.empty()) {
        int xx = q.top().num, cmp = q.top().cha;
        q.pop();
        int yy = a[xx].r;
        if (a[xx].cha == cmp /*判断是否是更新过的*/ && a[xx].judge != a[yy].judge /*一男一女*/
            && xx != 0 && yy != n + 1 /*特判链表首尾 */) {
            ans[++t][0] = xx;
            ans[t][1] = yy;
            a[a[xx].l].cha += a[xx].cha + a[yy].cha;
            a[a[yy].r].l = a[xx].l;
            a[a[xx].l].r = a[yy].r;
            if (a[xx].l > 0 && a[yy].r <= n)
                q.push(a[a[xx].l]);
            a[xx].l = a[xx].r = 0;
            a[yy].l = a[yy].r = n + 1;
        }
    }
    printf("%d\n", t);
    for (int i = 1; i <= t; i++)
        printf("%d %d\n", ans[i][0], ans[i][1]);
    return 0;
}