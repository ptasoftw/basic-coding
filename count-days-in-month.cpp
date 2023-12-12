#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month: ";
    cin >> month;

    // 1 3 5 7 8 10 12: 31 days
    // 4 6 9 11: 30 days
    // 2: 28 days
    
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << month << " have 31 days in month\n";
            break; 

        case 4:
        case 6:
        case 9:
        case 11:
            cout << " have 30 days in month\n";
            break;

        case 2:
            cout << " have 28 days in nmonth\n";
            break;
    }

    return 0;
}