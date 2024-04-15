#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int a;
    long b;
    char A;
    float c;
    double d;

    cin >> a >> b >> A >> c >> d;
    cout << a << endl;
    cout << b << endl;
    cout << A << endl;
    cout << fixed << setprecision(3) << c << endl;
    cout << fixed << setprecision(9) << d << endl;
    return 0;
}
