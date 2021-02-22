#include <iostream>

using namespace std;

int main() {
    int day, month, year;

    cin >> day >> month >> year;

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
    bool has30Days = month == 4 || month == 6 || month == 9 || month == 11;
    if(!(day > 31 || day < 1 || month > 12 || month < 1 || year < 0
        || (has30Days && day > 30) || (month == 2 && !isLeapYear && day > 28))){
        if (day > 1 && day < 28){
            day = day + 1;
        }
        if (day == 28){
            if (month == 2){
                if (isLeapYear){
                    day = day + 1;
                }else{
                    day = 1;
                    month = 3;
                }
            }else{
                day = day + 1;
            }
        }
        if(day == 29){
            if(month == 2){
                day = 1;
                month = 3;
            }else{
                day = day + 1;
            }
        }
        if(day == 30){
            if(month == 4 || month == 6 || month == 9 || month == 11){
                day = 1;
                month = month + 1;
            }else{
                day = day + 1;
            }
        }
        if(day == 31){
            day = 1;
            if(month == 12){
                year = year + 1;
                month = 1;
            }else{
                month = month + 1;
            }
        }

        cout << day << "/";
        cout << month << "/";
        cout << year;

    }else{
        cout << "Invalid date!" << endl;
    }
    return 0;
}