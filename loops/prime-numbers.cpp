#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number;
    bool isPrime = true, not01 = false;
    cin >> number;
    isPrime = (number == 0 || number == 1 ? isPrime = false : not01 = true);
    if(not01 == true && isPrime == true){
        for(int i = 2; i <= sqrt(number); i++){
            if(number % i == 0){
                isPrime = false;
                break;
            }
        }
    }

    (isPrime == true) ? cout << "yes" : cout << "no";

    return 0;
}