#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int sum, minus;
    sum = a + b;
    minus = a - b;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "a + b = " << sum << endl;
    cout << "a - b = " << minus;

    return 0;
}