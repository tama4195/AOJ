#include <bits/stdc++.h>
#include <stdint.h>

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;
int main(void) {
    std::string s;
    cin >> s;
    int max = 0;

    for (int i = 0; (size_t)i < s.size(); i++) {
        for (int j = i; (size_t)j < s.size(); j++) {
            int cnt_a = std::count(s.begin() + i, s.begin() + j, 'A');
            int cnt_c = std::count(s.begin() + i, s.begin() + j, 'C');
            int cnt_g = std::count(s.begin() + i, s.begin() + j, 'G');
            int cnt_t = std::count(s.begin() + i, s.begin() + j, 'T');
            int sum = cnt_a + cnt_c + cnt_g + cnt_t;
            if (sum == (abs(j - i))) {
                if (max < sum) max = sum;
            }
        }
    }

    cout << max << endl;

    return 0;
}
