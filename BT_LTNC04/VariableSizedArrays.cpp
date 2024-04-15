
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;

    vector<vector<int>> sequences(n);

    for (int i = 0; i < n; ++i) {
        int len;
        cin >> len;
        sequences[i].resize(len);
        for (int j = 0; j < len; ++j) {
            cin >> sequences[i][j];
    }
    }

    for (int k = 0; k < q; ++k) {
        int i, j;
        cin >> i >> j;

        if (i >= 0 && i < n && j >= 0 && j < sequences[i].size()) {
            cout << sequences[i][j] << endl;
        }
    }
    return 0;
}
