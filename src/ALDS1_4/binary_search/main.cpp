#include <bits/stdc++.h>

#include <iostream>
#include <string>
using namespace std;

/*問題
 * Binary Search
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_B
 */

/*アルゴリズム
 * Siの探索
 * 初期値 n / 2とする
 * 
 */

/*出力
 *
 */

int main(void) {
    int64_t n, q;
    int64_t S[100001] = {0}, T[50001] = {0};
    std::cin >> n;
    for (int i = 0; i < n; i++) cin >> S[i];
    cin >> q;
    for (int i = 0; i < q; i++) cin >> T[i];

    int C = 0;
    for (int i = 0; i < q; i++) {
        int64_t begin = 0;
        int64_t end = n;
        while (begin < end) {
            int64_t mid = (begin + end) / 2;
            if (S[mid] == T[i]) {
                C++;
                break;
            } else if (T[i] < S[mid])
                end = mid;
            else
                begin = mid + 1;
        }
    }
    cout << C << endl;
    return 0;
}
