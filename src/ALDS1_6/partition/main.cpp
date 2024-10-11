#include <bits/stdc++.h>

#include <iostream>
#include <string>
using namespace std;

/*問題
 * Partition
 * https://onlinejudge.u-aizu.ac.jp/courses/lesson/1/ALDS1/6/ALDS1_6_B
 */

/*
 *
 */

/*出力
 *
 */

const int SIZE = 100001;

int partition(std::vector<int> &A, int p, int r) {
    int x = A[r];
    int i = p - 1;
    for (int j = p; j < r; r++) {
        if (A[j] <= x) {
            i++;
            int tmp = A[i];
            A[i] = A[j];
            A[j] = tmp;
        }
    }
    A[i + 1] = A[r];
    return i + 1;
}

void printResult(std::vector<int> &A, int n, int q) {
	int i;
    for (i = 0; i < n - 1; i++) {
        if (i == q)
            cout << "[" << A[i] << "]" << " ";
        else
            cout << A[i] << " ";
    }
    cout << A[i] << endl;
}

int main(void) {
    int n;
    cin >> n;
    std::vector<int> A(SIZE);
    for (int i = 0; i < n; i++) cin >> A[i];
    int p = 0;
    int r = n - 1;
    int q = partition(A, p, r);
    printResult(A, n, q);

    return 0;
}
