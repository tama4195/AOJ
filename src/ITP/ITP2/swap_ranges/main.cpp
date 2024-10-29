#include <bits/stdc++.h>
#include <stdint.h>

#include <algorithm>
#include <iostream>
#include <vector>
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
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            cout << v.at(i);
        } else {
            cout << " " << v.at(i);
        }
    }
    cout << endl;
}

int main(void) {
    int n;
    std::vector<int> a;
    input_vector(n, a);

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int b, m, t;
        cin >> b >> m >> t;
        std::swap_ranges(a.begin() + b, a.begin() + m, a.begin() + t);
    }
    print_vector(n, a);

    return 0;
}
