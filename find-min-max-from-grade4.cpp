#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int a, b;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    int sum = a + b;
    int minus = abs(a - b);

    int bigger = ((sum + minus)/2);
    int smaller = ((sum - minus)/2);

    cout << "Max = " << bigger << endl;
    cout << "Min = " << smaller << endl;
    
    return 0;
}