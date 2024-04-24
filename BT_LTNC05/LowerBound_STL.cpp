#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) cin >> v[i];
    int Q; cin >> Q;
    while(Q--){
        int Y; cin >> Y;
        auto it = lower_bound(v.begin(), v.end(), Y);

        if(it != v.end() && *it == Y){
            cout << "Yes " << (it - v.begin() + 1) << endl;
        } else {
            cout << "No " << it - v.begin() + 1 << endl;
        }
    }
    return 0;
}
