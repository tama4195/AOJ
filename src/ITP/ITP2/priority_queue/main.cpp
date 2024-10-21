#include <bits/stdc++.h>
#include <stdint.h>

#include <iostream>
#include <iterator>
#include <queue>
#include <string>
using namespace std;

enum COMMAND { INSERT, GETMAX, DELETEMAX };

int main(void) {
    int64_t n, q;
    cin >> n >> q;
    std::vector<
        std::priority_queue<int64_t, std::vector<int64_t>, std::less<int64_t>>>
        qs(n);

    for (int64_t i = 0; i < q; i++) {
        int cmd, t, x;
        cin >> cmd >> t;
        if (cmd == INSERT) {
            cin >> x;
            qs[t].push(x);
        } else if (cmd == GETMAX) {
            if (not qs[t].empty()) cout << qs[t].top() << endl;
        } else if (cmd == DELETEMAX) {
            if (not qs[t].empty()) qs[t].pop();
        }
    }
    return 0;
}
