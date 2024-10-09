#include <bits/stdc++.h>

#include <iostream>
#include <string>
using namespace std;

/*問題
 * Counting Sort
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/6/ALDS1_6_A
 */

/*アルゴリズム
 *
 *
 */

/*出力
 *
 */

#define SIZE (2000001)
uint64_t A[SIZE] = {0};
uint64_t B[SIZE] = {0};
uint64_t C[SIZE] = {0};

int main(void) {
    uint64_t n;
    cin >> n;
    for (uint64_t i = 0; i < n; i++) cin >> A[i];
    for (uint64_t i = 0; i < n; i++) C[A[i]]++;
    uint64_t index = 0;
    for (uint64_t i = 0; i < SIZE; i++) {
        if (C[i] != 0) {
            for (uint64_t j = 0; j < C[i]; j++) {
                B[index++] = i;
            }
        }
    }
    for (uint64_t i = 0; i < n - 1; i++) cout << B[i] << " ";
    cout << B[n - 1] << endl;

    return 0;
}
