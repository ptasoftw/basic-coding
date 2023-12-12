
/*
Viết chương trình nhập vào lần lượt năm và tháng sau đó hiển thị ra màn hình tổng số ngày trong tháng đó.
Lưu ý: 
    1 <= month <= 12 
    tháng 2 của năm nhuận có 29 ngày.
*/
#include <iostream>
using namespace std;

int main()
{
    int year, month;

    cin >> year >> month;

    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "Thang " << month << " nam " << year << " co 31 ngay";
            break; 

        case 4:
        case 6:
        case 9:
        case 11:
            cout << "Thang " << month << " nam " << year << " co 30 ngay";
            break;

        case 2:
            if( (year % 4 == 0) || (year % 400 == 0) && (year % 100 != 0) ) {
                cout << "Thang " << month << " nam " << year << " co 29 ngay";           
                break;
            } else { 
                cout << "Thang " << month << " nam " << year << " co 28 ngay";           
                break;
            }
        
        default:
            cout << "Thang khong hop le";
    }
    
    return 0;
}
