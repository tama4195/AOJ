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
    std::vector<int> v;
    input_vector(n, v);

	int m;
	cin >> m;
	for(int i = 0; i < m; i++) {
		int x;
		cin >> x;
		if(std::binary_search(v.begin(), v.end(), x)) cout << 1 << endl;
		else cout << 0 << endl;
	}

    return 0;
}
