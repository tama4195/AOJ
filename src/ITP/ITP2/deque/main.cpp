#include <bits/stdc++.h>
#include <stdint.h>

#include <iostream>
#include <string>
#include <deque>
using namespace std;

enum COMMAND { PUSH, ACCESS, POP };
enum POINT { HEAD, TAIL };

int main(void) {
    int64_t q;
    cin >> q;
    deque<int64_t> A;
    int command;
    int64_t x;
    int point = 0;
    for (int64_t i = 0; i < q; i++) {
        cin >> command;
        if (command == PUSH) {
            cin >> point;
            cin >> x;
            if (point == HEAD) {
                A.push_front(x);
            } else if (point == TAIL) {
                A.push_back(x);
            } else {
                ;
            }
        } else if (command == ACCESS) {
            cin >> x;
            cout << A.at(x) << endl;
        } else if (command == POP) {
            cin >> point;
            if (point == HEAD) {
                A.pop_front();
            } else if (point == TAIL) {
                A.pop_back();
            } else
                ;
        }
    }
    return 0;
}
