#include <iostream>
#include <vector>

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N;

        vector<int> v;

        int original_N = N;
        while (N > 0) {
            v.push_back(N % 10);
            N /= 10;
        }

        int count = 0;
        for (int j = 0; j < v.size(); ++j) {
            if (v[j] != 0 && original_N % v[j] == 0) {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
