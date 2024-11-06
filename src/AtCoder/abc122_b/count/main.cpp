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
            int flag = 0;
            if (j == i) {
                if (s[i] == 'A' or s[i] == 'C' or s[i] == 'G' or s[i] == 'T') {
                    sum = 1;
                }
            } else {
                for (int k = i; k <= j; k++) {
                    if (s[k] == 'A' or s[k] == 'C' or s[k] == 'G' or s[k] == 'T') {
                        sum++;
                    } else {
                        flag = 1;
                    }
                }
            }
            if (flag == 0) {
                if (max < sum) max = sum;
            }
        }
    }

    cout << max << endl;

    return 0;
}
