/*
Viết chương trình nhập vào lần lượt lương cơ bản và tổng tiền lương. Tính và hiển thị số tiền thực lĩnh ra màn hình.
Gợi ý:
Số tiền thực lĩnh = Tổng tiền - Tiền thuế
Tiền thuế = 0 nếu tổng tiền <= lương cơ bản, ngược lại thì tiền thuế = (Tổng tiền - Lương cơ bản) * 0.1
*/

#include <iostream>
using namespace std;

int main() {
    float sum_money, basic_salary;
    cout << "sum money: ";
    cin >> sum_money;

    cout << "basic salary: ";
    cin >> basic_salary;

    float tax = (sum_money - basic_salary)*0.1;
    float real_salary = sum_money - tax;

    if (sum_money <= basic_salary) {
        tax = 0;
        cout << "real salary = " << sum_money - tax << endl; 
    } else if (sum_money > basic_salary) {
        
        cout << "real salary = " << real_salary << endl;
    }
    return 0;
}