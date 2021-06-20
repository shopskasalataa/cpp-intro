#include <iostream>
#define MAXN 100
using namespace std;
int main(){
    int n, a[MAXN], period[MAXN], sequence = 0;
    bool is_sequence = false;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> *(a + i);
    }
    *(period + 0) = *(a + 0);
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            
        }
    }
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
Изход:1 2 -3

Вход:12
1 2 3 2 1 1 2 3 2 1 1 2
Изход:Not period
*/