#include <bits/stdc++.h>
#include <stdint.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    int n;
    cin >> n;
    std::vector<int64_t> v;
    for (int i = 0; i < n; i++) {
        int64_t x;
        cin >> x;
        v.push_back(x);
    }
    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int k, b, e;
        cin >> b >> e >> k;
        auto begin = v.begin() + b;
        auto end = v.begin() + e;
        cout << std::count(begin, end, k) << endl;
    }

    return 0;
}
