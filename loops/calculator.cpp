#include <iostream>

using namespace std;

int main() {
    char symbol = '+';
    double res = 0, number;

    while(symbol != '='){
        cin >> number;
        switch (symbol) {
            case '+': res += number; break;
            case '-': res -= number; break;
            case '*': res *= number; break;
            case '/':
                if(number!= 0){
                    res /= number;
                }
                break;
            default: cout << "Invalid character" << endl;
        }
        cin >> symbol;
    }
    cout << res << endl;

    return 0;
}