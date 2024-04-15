#include <iostream>
#include <string>
using namespace std;

void swap(string m, string n){
    char tmp = m[0];
    m[0] = n[0];
    n[0] = tmp;
    cout << m << " " << n;
}

int main() {
	// Complete the program
    string a, b; cin >> a >> b;
    cout << (int) a.size() << " " << (int) b.size() << endl;
    cout << a + b << endl;
    swap(a, b);

    return 0;
}
