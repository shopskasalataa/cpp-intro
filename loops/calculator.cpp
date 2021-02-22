#include <iostream>

using namespace std;

int main() {
    char symbol;
    double res = 0, number;
    cin >> number;
    res += number;

    cin >> symbol;
    while(symbol!='='){
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
        }
        cin >> symbol;
    }

    cout << res << endl;
    return 0;
}
