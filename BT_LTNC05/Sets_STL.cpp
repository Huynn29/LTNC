#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    set<int> s;
    while(n--){
        int type, x; cin >> type >> x;
        if(type == 1){
            s.insert(x);
        } else if(type == 2) {
            s.erase(x);
        } else {
            if(s.find(x) != s.end()){
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
