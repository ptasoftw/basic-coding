#include <iostream>
using namespace std;

int main() {
    int days, hourss;
    int mminutes, sseconds;
    cin >> days;
    cin >> hourss;
    cin >> mminutes;
    cin >> sseconds;

    int a = days * 24 * 60 * 60;
    int b = hourss * 60 * 60;
    int c =  mminutes* 60;

    int sum = a + b + c + sseconds;

    cout << sum;

    return 0;
}