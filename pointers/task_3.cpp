#include <iostream>
#define MAXN 100
using namespace std;
int main(){
    int n, a[MAXN];
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> *(a + i);
    }
    
    int first = *(a + 0);
    for(int i = 1; i < n; i++){
        if(*(a + i) == first && n % i == 0){
            bool is_sequence = true;
            int p = n / i;
            for(int k = i; k < n && is_sequence; k += p){
                for(int j = 0; j < i && is_sequence; j++){
                    is_sequence = (*(a + j) == *(a + (k + j)));
                }
                if(is_sequence){
                    for(int j = 0; j < i; j++){
                        cout << *(a + j) << " ";
                    }
                    cout << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Not period." << endl;
    return 0;
}
/*
Да се проверява дали в даден масив с размер N има период. Период наричаме повтаряща се последователност 
на числа. Ако има такъв, то той да се изведе. Ако няма, да се изведе подходящо съобщение. Задачата да 
се реши с указателна аритметика.

Ограничения: 0 < N < 100

Пример:
Вход:
9 
1 2 -3 1 2 -3 1 2 -3
Изход:
1 2 -3

Вход:
12
1 2 3 2 1 1 2 3 2 1 1 2
Изход:Not period
*/