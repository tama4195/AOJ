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
void merge(vector<uint64_t>& A, uint64_t left, uint64_t mid, uint64_t right, int &cnt) {
    uint64_t n1 = mid - left;
    uint64_t n2 = right - mid;
    vector<uint64_t> L(500000);
    vector<uint64_t> R(500000);
    for (uint64_t i = 0; i < n1; i++) L[i] = A[left + i];
    for (uint64_t i = 0; i < n2; i++) R[i] = A[mid + i];
    L[n1] = UINT64_MAX;
    R[n2] = UINT64_MAX;
    uint64_t i, j;
    i = j = 0;
    for (uint64_t k = left; k < right; k++) {
		cnt++;
        if (L[i] <= R[j]) {
            A[k] = L[i];
			i++;
		}
        else {
            A[k] = R[j];
			j++;
		}
    }
}

void mergeSort(vector<uint64_t>& A, uint64_t left, uint64_t right, int &cnt) {
    if (left + 1 < right) {
        uint64_t mid = (left + right) / 2;
        mergeSort(A, left, mid, cnt);
        mergeSort(A, mid, right, cnt);
        merge(A, left, mid, right, cnt);
    }
    return;
}

void printResult(vector<uint64_t>& A, uint64_t n, int cnt) {
    for (uint64_t i = 0; i < n - 1; i++) cout << A[i] << " ";
    cout << A[n - 1] << endl;
	cout << cnt << endl;
}

int main(void) {
    uint64_t n;
    cin >> n;
	int cnt = 0;
    vector<uint64_t> A(500001);
    for (uint64_t i = 0; i < n; i++) cin >> A[i];
    mergeSort(A, 0, n, cnt);
    printResult(A, n, cnt);
    return 0;
}

