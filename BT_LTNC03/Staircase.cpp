#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int k = n - 1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < k; j++) cout << " ";
        for(int j = 0; j < i; j++) cout << "#";
        cout << endl;
        k--;
    }
    return 0;
}
