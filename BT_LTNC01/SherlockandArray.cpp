#include <bits/stdc++.h>

using namespace std;

int main(){
    int T; cin >> T;
    for(int i = 0; i < T; i++){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int left = 0, right = n - 1;
    int leftsum = a[left], rightsum = a[right];

    while(left<right) {
        if(leftsum<=rightsum) {
            left++;
            leftsum+=a[left];
        }else {
            right--;
            rightsum+=a[right];
        }
    }
    if(leftsum==rightsum) cout << "YES" << endl;
    else cout << "NO" << endl;
    }
}
