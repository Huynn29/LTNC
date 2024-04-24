#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Q; cin >> Q;
    map<string, int> scores;
    while(Q--){
        int type, Y;
        string ten;
        cin >> type >> ten;
        if(type == 1){
            cin >> Y;
            scores[ten] += Y;
        } else if(type == 2){
            scores.erase(ten);
        } else if(type == 3){
            cout << scores[ten] << endl;
        }
    }
    return 0;
}
