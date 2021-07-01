#include <iostream>
using namespace std;
int main() {
    int n, prev_num, count = 1;
    cin >> n;
    prev_num = n;
    while(n != 1){
        if(prev_num % 2 == 0){
            n = prev_num / 2;
            prev_num = n;
        }else{
            n = 3 * prev_num + 1;
            prev_num = n;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}
