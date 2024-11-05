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
    std::vector<int> a;
    input_vector(n, a);

	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		int x;
		cin >> x;
		auto it = std::lower_bound(a.begin(), a.end(), x);
		auto pos = std::distance(a.begin(), it);
		cout << pos << endl;
	}

    return 0;
}
