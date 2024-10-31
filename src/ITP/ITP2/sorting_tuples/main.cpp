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
    int n;
    cin >> n;
    std::vector<std::tuple<int, int, char, int64_t, string>> vec;
    for (int i = 0; i < n; i++) {
        int v, w;
		int64_t d;
        char t;
        string s;
        cin >> v >> w >> t >> d >> s;
        vec.push_back({v, w, t, d, s});
    }

    sort(vec.begin(), vec.end());

    for (auto v : vec) {
        cout << std::get<0>(v) << " " << std::get<1>(v) << " "
             << std::get<2>(v) << " " << std::get<3>(v) << " "
             << std::get<4>(v) << endl;
    }

    return 0;
}
