#include <bits/stdc++.h>
#include <stdint.h>

#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
using namespace std;

template <typename T>
void input_vector(int &n, std::vector<T> &v) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
}

template <typename T>
void print_vector(const T n, const std::vector<T> v) {
    int i = 0;
    for (auto x : v) {
        if (i == 0) {
            cout << x;
        } else {
            cout << " " << x;
        }
        i++;
    }
    cout << endl;
}

int main(void) {
    int q;
    std::set<int> s;
	cin >> q;
    for (int i = 0; i < q; i++) {
        int query, x;
        cin >> query >> x;
        if (query == 0) {
            s.insert(x);
            cout << s.size() << endl;
        } else if (query == 1) {
            if (s.find(x) != s.end()) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        } else
            ;
    }

    return 0;
}
