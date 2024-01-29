// 合并果子
#include <bits/stdc++.h>
using namespace std;

int n, t, id, sum, a[100010];

void add(int x) {
    id++;
    a[id] = x;
    int k = id;
    while (k / 2 >= 1 && a[k] < a[k / 2]) {
        swap(a[k], a[k / 2]);
        k /= 2;
    }
}

void del() {
    a[1] = a[id], id--;
    int k = 1;
    while (k * 2 + 1 <= id && (a[k] > a[k * 2] || a[k] > a[k * 2 + 1])) {
        if (a[k * 2] < a[k * 2 + 1]) {
            swap(a[k], a[k * 2]);
            k *= 2;
        } else {
            swap(a[k], a[k * 2 + 1]);
            k = k * 2 + 1;
        }
    }
    if (id == k * 2 && a[k] > a[k * 2])
        swap(a[k], a[k * 2]);
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> t;
        add(t);
    }
    while (id > 1) {
        int x1 = a[1];
        del();
        int x2 = a[1];
        del();
        sum += (x1 + x2);
        add(x1 + x2);
    }
    cout << sum << endl;
    return 0;
}
