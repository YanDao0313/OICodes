#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>> big;               // 大根堆
priority_queue<int, vector<int>, greater<int>> sma; // 小根堆

int absf(int x) {
    if (x >= 0)
        return x;
    else
        return -x;
}

int n, t;

int main() {
    cin >> n;
    scanf("%d", &t);
    big.push(t);
    cout << big.top() << endl;
    for (int i = 2; i <= n; i++) {
        scanf("%d", &t);
        if (t > big.top())
            sma.push(t);
        else
            big.push(t);
        while (absf(big.size() - sma.size()) > 1) {
            if (big.size() > sma.size()) {
                sma.push(big.top());
                big.pop();
            } else {
                big.push(sma.top());
                sma.pop();
            }
        }
        if (i % 2 != 0) {
            if (big.size() > sma.size())
                printf("%d\n", big.top());
            else
                printf("%d\n", sma.top());
        }
    }
    return 0;
}