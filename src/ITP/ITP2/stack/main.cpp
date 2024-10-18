#include <bits/stdc++.h>
#include <stdint.h>

#include <iostream>
#include <iterator>
#include <stack>
#include <string>
using namespace std;

enum COMMAND { POP, TOP, PUSH };

int main(void) {
    int64_t n, q;
    cin >> n >> q;
    std::vector<std::stack<int64_t>> stacks(n);

    for (int64_t i = 0; i < q; i++) {
        int cmd, t, x;
        cin >> cmd >> t;
        if (cmd == POP) {
            cin >> x;
            stacks[t].push(x);
        } else if (cmd == TOP) {
            if (not stacks[t].empty()) cout << stacks[t].top() << endl;
        } else if (cmd == PUSH) {
            if (not stacks[t].empty()) stacks[t].pop();
        }
    }
    return 0;
}
