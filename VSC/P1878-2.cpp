#include <bits/stdc++.h>
using namespace std;

struct node {
    int l, r, cha, num;
    bool judge; // 打男女标记
} a[200010];

int ans[200010][2], sum = 0, n, now, t = 0;
char c;

priority_queue<node> q; // 用优先队列来维护相邻舞者之间的技术值的差，每次取最小

bool operator<(node R, node L) {          // 重载运算符，便于后续判断
    int tl = abs(L.cha), tr = abs(R.cha); // 优先队列有限法则
    if (tr != tl)
        return tl < tr;
    else
        return L.num < R.num;
}

int main() {
    int next;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> c;
        if (c == 'B')
            a[i].judge = 0;
        else
            a[i].judge = 1;
    }
    scanf("%d", &now);
    for (int i = 1; i < n; i++) {
        scanf("%d", &next);
        a[i].num = i;          // 自身是第几个
        a[i].cha = next - now; // 预处理技术值差
        a[i].l = i - 1;        // 预处理左右
        a[i].r = i + 1;
        q.push(a[i]);
        now = next;
    }
    a[n].r = n + 1;
    a[n].num = n;
    a[n].cha = 0x7f;
    // 开始模拟过程
    while (!q.empty()) {
        int x1 = q.top().num, cmp = q.top().cha, x2 = a[x1].r;
        q.pop();                          // 在此时，非法的一队就会被丢弃
        if (a[x1].cha == cmp              // 判断是否更新过
            && a[x1].judge != a[x2].judge // 判断是否一男一女
            && x1 != 0 && x2 != n + 1) {  // 特判链表首尾
            // 在每次更新差值的时候，用int数组存放更新了的差值.
            // 如果在后面从优先队列中取出的差值与之前存放的差值不相等
            // 则说明这个差值未被更新，那也不执行操作
            t++, ans[t][0] = x1, ans[t][1] = x2;
            a[a[x1].l].cha += a[x1].cha + a[x2].cha; // 更新差值
            a[a[x2].r].l = a[x1].l;                  // 断链重连
            a[a[x1].l].r = a[x2].r;
            if (a[x1].l > 0 && a[x2].r <= n) // if合法, 入队
                q.push(a[a[x1].l]);          // tip:再次特判了链表首尾
            a[x1].l = a[x1].r = 0;
            a[x2].l = a[x2].r = n + 1;
        }
    }
    cout << t << endl;
    for (int i = 1; i <= t; i++)
        printf("%d %d\n", ans[i][0], ans[i][1]); // NO TLE
    // cout << ans[i][0] << ' ' << ans[i][1] << endl;
    return 0;
}