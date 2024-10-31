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
    std::vector<std::pair<int, int>> v;
	for (int i = 0; i<n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back({x, y});
	}

	sort(v.begin(), v.end());


	for (auto p : v) {
		cout << p.first << " " << p.second << endl;
	}

    return 0;
}
