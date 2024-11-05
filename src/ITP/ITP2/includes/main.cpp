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
    int n, m;
    std::vector<int> a, b;
    input_vector(n, a);
    input_vector(m, b);

    if (std::includes(a.begin(), a.end(), b.begin(), b.end())) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
