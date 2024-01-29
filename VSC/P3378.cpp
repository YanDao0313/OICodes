#include <bits/stdc++.h>
using namespace std;

int n, t, id, a[1000020];

void add(int x) {
    id++;
    a[id] = x;
    int k = id;
    while (k > 1 && a[k] < a[k / 2]) {
        swap(a[k], a[k / 2]);
        k /= 2;
    }
}

void del() {
    a[1] = a[id], id--;
    int k = 1;
    while (id >= k * 2 + 1 && (a[k] > a[k * 2] || a[k] > a[k * 2 + 1])) {
        if (a[k * 2] < a[k * 2 + 1]) {
            swap(a[k], a[k * 2]);
            k = k * 2;
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
        if (t == 1) {
            cin >> t;
            add(t);
        } else if (t == 2) {
            cout << a[1] << endl;
        } else {
            del();
        }
    }
    return 0;
}