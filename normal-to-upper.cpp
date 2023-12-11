#include <iostream>
using namespace std;

int main() {
    char chr;
    cin >> chr;
    cout << "Chu cai viet thuong: " << chr << endl;
    cout << "Chu cai viet hoa: " << (char)(chr - 32);

    return 0;
}