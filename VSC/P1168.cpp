#include <bits/stdc++.h>
using namespace std;

priority_queue<int, vector<int>> big;               // 大根堆
priority_queue<int, vector<int>, greater<int>> sma; // 小根堆

int read() {
    int x = 0;
    bool f = 0;
    char c = getchar();
    while (c < '0' || c > '9') {
        if (c == '-') f = 1;
        c = getchar();
    }
    while (c >= '0' && c <= '9') {
        x = (x << 1) + (x << 3) + (c ^ 48);
        c = getchar();
    }
    return f ? -x : x;
}

int main() {
    int n = read();
    big.push(read());
    cout << big.top() << endl;
    for (int i = 2; i <= n; i++) {
        int input = read();
        if (input > big.top())
            sma.push(input);
        else
            big.push(input);
        while (abs(big.size() - sma.size()) > 1)
            if (big.size() > sma.size()) {
                sma.push(big.top());
                big.pop();
            } else {
                big.push(sma.top());
                sma.pop();
            }
        if (i % 2)
            cout << (big.size() > sma.size() ? big.top() : sma.top()) << endl;
    }
    return 0;
}

/*
使用两个堆，大根堆维护较小的值，小根堆维护较大的值
即小根堆的堆顶是较大的数中最小的，大根堆的堆顶是较小的数中最大的
将大于大根堆堆顶的数（比所有大根堆中的元素都大）的数放入小根堆，小于等于大根堆堆顶的数（比所有小根堆中的元素都小）的数放入大根堆
那么就保证了所有大根堆中的元素都小于小根堆中的元素
于是我们发现对于大根堆的堆顶元素，有【小根堆的元素个数】个元素比该元素大，【大根堆的元素个数-1】个元素比该元素小；
同理，对于小跟堆的堆顶元素，有【大根堆的元素个数】个元素比该元素小，【小根堆的元素个数-1】个元素比该元素大；
那么维护【大根堆的元素个数】和【小根堆的元素个数】差值不大于1之后，元素个数较多的堆的堆顶元素即为当前中位数；（如果元素个数相同，那么就是两个堆堆顶元素的平均数，本题不会出现这种情况）
根据这两个堆的定义，维护方式也很简单，把元素个数多的堆的堆顶元素取出，放入元素个数少的堆即可
对于部分不会堆的同学，请参照下面各位神犇的算法，或者自行学习堆
下面是代码实现，使用了STL的优先队列作为堆，经过压行仅有24行代码，可读性可能比较低，如果觉得阅读困难可以参照下面各位神犇的代码
*/