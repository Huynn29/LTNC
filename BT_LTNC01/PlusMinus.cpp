#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    float neg = 0, pos = 0, zer = 0;
    for(int i = 0; i < n; i++){
        if(a[i] < 0) neg++;
        else if(a[i] > 0) pos++;
        else zer++;
    }
    cout << fixed << setprecision(6) << pos / n << endl << neg / n << endl << zer / n;
    return 0;
}
