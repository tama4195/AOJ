#include <bits/stdc++.h>
#include <stdint.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void input_vector(int &n, std::vector<T> &v) {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        v.push_back(i);
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


	do {
		print_vector(n, v);
	} while(std::next_permutation(v.begin(), v.end()));

    return 0;
}
