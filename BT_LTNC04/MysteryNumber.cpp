#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    int a[n], b[n + 1];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n + 1; i++) cin >> b[i];
    sort(a, a+n);
    sort(b, b+n+1);
    for(int i = 0; i < n + 1; i++){
        if(a[i] != b[i]){
            cout << b[i];
            break;
        }
    }
    return 0;
}
