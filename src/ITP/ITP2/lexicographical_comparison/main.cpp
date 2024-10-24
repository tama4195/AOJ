#include <bits/stdc++.h>
#include <stdint.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
void input_vector(std::vector<int> &v) {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }
}
int main(void) {
    std::vector<int> a, b;
    input_vector(a);
    input_vector(b);

    if (std::lexicographical_compare(a.begin(), a.end(), b.begin(), b.end())) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}
