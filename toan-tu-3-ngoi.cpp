#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "a = ";
    cin >> a;
    
    cout << "b = ";
    cin >> b;

    int answer = a < b ? a : b;

    cout << "number smaller is: " << answer << endl;

    return 0; 
}