#include <bits/stdc++.h>
#include <stdint.h>

#include <iostream>
#include <string>
using namespace std;

enum COMMAND { PUSH, ACCESS, POP };

int main(void) {
    int q;
    cin >> q;
    std::vector<int64_t> A;
    for (int i = 0; i < q; i++) {
        int command;
        int64_t x;
        cin >> command;
        if (command == PUSH) {
			cin >> x;
            A.push_back(x);
        } else if (command == ACCESS) {
			cin >> x;
            cout << A.at(x) << endl;
        } else if (command == POP) {
            A.pop_back();
        }
    }
    return 0;
}
