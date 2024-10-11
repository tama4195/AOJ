#include <bits/stdc++.h>
#include <stdint.h>

#include <iostream>
#include <string>
using namespace std;

enum COMMAND { PUSH, ACCESS, POP };

int main(void) {
    int q;
    cin >> q;
    std::vector<int64_t> A(q);
    for (int i = 0; i < q; i++) {
        int command;
        int64_t x;
        cin >> command >> x;
        if (command == PUSH) {
            A.push_back(x);
        } else if (command == ACCESS) {
            cout << A.at(x);
        } else if (command == POP) {
            A.pop_back();
        }
    }
    return 0;
}
