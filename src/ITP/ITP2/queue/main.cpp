#include <bits/stdc++.h>
#include <stdint.h>

#include <iostream>
#include <iterator>
#include <queue>
#include <string>
using namespace std;

enum COMMAND { ENQUEUE, FRONT, DEQUEUE };

int main(void) {
    int64_t n, q;
    cin >> n >> q;
    std::vector<std::queue<int64_t>> qs(n);

    for (int64_t i = 0; i < q; i++) {
        int cmd, t, x;
        cin >> cmd >> t;
        if (cmd == ENQUEUE) {
            cin >> x;
            qs[t].push(x);
        } else if (cmd == FRONT) {
            if (not qs[t].empty()) cout << qs[t].front() << endl;
        } else if (cmd == DEQUEUE) {
            if (not qs[t].empty()) qs[t].pop();
        }
    }
    return 0;
}
