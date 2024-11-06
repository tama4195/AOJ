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
            int sum = 0;
            if (j == i) {
                if (s[i] == 'A' or s[i] == 'C' or s[i] == 'G' or s[i] == 'T') {
                    sum = 1;
                }
            } else {
                int cnt_a = std::count(s.begin() + i, s.begin() + j, 'A');
                int cnt_c = std::count(s.begin() + i, s.begin() + j, 'C');
                int cnt_g = std::count(s.begin() + i, s.begin() + j, 'G');
                int cnt_t = std::count(s.begin() + i, s.begin() + j, 'T');
                sum = cnt_a + cnt_c + cnt_g + cnt_t;
            }
            if (sum >= (abs(j - i))) {
                if (max < sum) max = sum;
            } else
                break;
        }
    }

    cout << max << endl;

    return 0;
}
