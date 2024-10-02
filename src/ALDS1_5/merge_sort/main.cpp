#include <bits/stdc++.h>

#include <iostream>
#include <string>
using namespace std;

/*問題
 * Merge Sort
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/5/ALDS1_5_B
 */

/*アルゴリズム
 *
 *
 */

/*出力
 *
 */

void merge(vector<uint64_t>& A, uint64_t left, uint64_t mid, uint64_t right) {
    uint64_t n1 = mid - left;
    uint64_t n2 = right - mid;
    vector<uint64_t> L, R;
    for (int i = 0; i < n1; i++) L[i] = A[left + i];
    for (int i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = INFINITY;
    R[n2] = INFINITY;
    uint64_t i, j;
    i = j = 0;
    for (int k = left; k < right; k++) {
        if (L[i] <= R[j])
            A[k] = L[i++];
        else
            A[k] = R[j++];
    }
}

void mergeSort(vector<uint64_t>& A, uint64_t left, uint64_t right) {
    if (left + 1 <= right) {
        uint64_t mid = (left + right) / 2;
        mergeSort(A, left, mid);
        mergeSort(A, mid, right);
        merge(A, left, mid, right);
    }
    return;
}

void printResult(vector<uint64_t>& A, uint64_t n) {
    for (int i = 0; i < n - 1; i++) cout << A[i] << " ";
    cout << A[n - 1] << endl;
}

int main(void) {
    uint64_t n;
    cin >> n;
    vector<uint64_t> A;
    for (int i = 0; i < n; i++) cin >> A[i];
    mergeSort(A, 0, n - 1);
    printResult(A, n);
    return 0;
}
