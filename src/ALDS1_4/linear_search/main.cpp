#include <bits/stdc++.h>

#include <iostream>
#include <string>
using namespace std;

/*問題
Linear Search
https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/4/ALDS1_4_A
*/

/*アルゴリズム
 - Tiを順に読み、それぞれがSに一致するかチェックする
 - 一致する整数があればTiのチェックは終わらせ、次の要素のチェックに進む

*/

/*出力
 * - TとSに一致する整数の個数C
 */

int main(void) {
    int64_t n, q;
    int64_t S[10001] = {0};
    int64_t T[501] = {0};
    std::cin >> n;
    for (int i = 0; i < n; i++) cin >> S[i];
    cin >> q;
    for (int i = 0; i < q; i++) cin >> T[i];

    int C = 0;
    for (int i = 0; i < q; i++) {
        for (int j = 0; j < n; j++) {
            if (T[i] == S[j]) {
                C++;
                break;
            }
        }
    }
    cout << C << endl;
    return 0;
}
