#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int number;
    bool isPrime = true, not01 = false;
    cin >> number;

    if(number < 2){
        cout << "no" << endl;

        return 0;
    }
    for(int i = 2; i <= sqrt(number); i++){
        if(number % i == 0){
            isPrime = false;
            break;
        }
    }

    (isPrime == true) ? cout << "yes" << endl : cout << "no" << endl;

    return 0;
}