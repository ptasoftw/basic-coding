/*
Viết chương trình nhập vào số năm. Kiểm tra xem đó có phải là năm nhuận hay không?
Để kiểm tra 1 năm có phải năm nhuận hay không, chúng ta chỉ cần tuân theo 1 trong 2 nguyên tắc sau đây:
Năm nhuận là năm chia hết cho 400.
Năm nhuận là năm chia hết cho 4 nhưng không chia hết cho 100.
*/

#include <iostream>
using namespace std;

int main() {
    int yearss;
    cout << "Enter year: ";
    cin >> yearss;

    if ((yearss % 4 == 0) && (yearss % 100 != 0)) {
        cout << yearss << " is a leap year" << endl;
    } else {
        cout << yearss << " is a common year" << endl;
    }

    return 0;
}