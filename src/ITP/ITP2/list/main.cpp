#include <bits/stdc++.h>
#include <stdint.h>

#include <iostream>
#include <iterator>
#include <list>
#include <string>
using namespace std;

enum COMMAND { INSERT, MOVE, ERASE };

/*
 * listは初期値はENDの要素１つのみ
 * カーソルの初期値はEND
 * INSERTの場合は、listにカーソルの位置指定でinsertする
 * */

int main(void) {
    int64_t q;
    cin >> q;
    std::list<int64_t> ls;
    auto cursor = ls.end();
    for (int64_t i = 0; i < q; i++) {
        int command;
        cin >> command;
        if (command == INSERT) {
            int64_t x;
            cin >> x;
            cursor = ls.insert(cursor, x);
        } else if (command == MOVE) {
            int64_t d;
            cin >> d;
			advance(cursor, d);
        } else if (command == ERASE) {
            cursor = ls.erase(cursor);
        }
    }
    for (auto itr : ls) {
        cout << itr << endl;
    }
    return 0;
}
