#include <bits/stdc++.h>
#include <stdint.h>

#include <iostream>
#include <iterator>
#include <list>
#include <string>
using namespace std;

enum COMMAND { INSERT, DUMP, SPLICE };

void dump(std::list<int64_t> &ls) {
    int i = 0;
    for (auto l : ls) {
        if (i++ == 0) {
            cout << l;
        } else {
            cout << " " << l;
        }
    }
    cout << endl;
}

int main(void) {
    int64_t n, q;
    cin >> n >> q;
    std::vector<std::list<int64_t>> ls(n);

    for (int64_t i = 0; i < q; i++) {
        int cmd, t, x, s;
        cin >> cmd >> t;
        if (cmd == INSERT) {
            cin >> x;
            ls[t].push_back(x);
        } else if (cmd == DUMP) {
            dump(ls[t]);
        } else if (cmd == SPLICE) {
            cin >> s;
            ls[s].splice(ls[s].end(), ls[t]);
        }
    }
    return 0;
}
