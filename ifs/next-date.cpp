#include <iostream>

using namespace std;

int main() {
    enum months{January = 1, February = 2, March = 3, April = 4, May = 5, June = 6,
            July = 7, August = 8, September = 9, October = 10, November = 11, December = 12, nextYear = 13};

    int day, month, year;
    cin >> day >> month >> year;

    int maxDays = 30;
    if(month == January || month == March || month == May ||
        month == July || month == August || month == October || month == December){
        maxDays = 31;
    }
    if(month == February){
        if((year%4 == 0 && year%100 != 0) || year%400 == 0){
            maxDays = 29;
        }else{
            maxDays = 28;
        }
    }

    day++;
    int nextMonth = maxDays + 1;
    if(day > nextMonth){
        cout << "Invalid date" << endl;
        return 0;
    }
    if(day == nextMonth){
        day = 1;
        month++;
        if(month == nextYear){
            month = January;
            year++;
        }
    }

    cout << day << "/" << month << "/" << year << endl;
    return 0;
}
