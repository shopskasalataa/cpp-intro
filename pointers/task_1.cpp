    /*
Задача 1
Дадена е квадратна матрица NxN. Да се провери дали е квадратче от валидно Судоку и да се изведе подходящо 
съобщение. Судоку не съдържа еднакви цифри по ред, колона и в едно квадратче, а всяко квадратче 
съдържа всички цифри от 1 до N^2. Да се използва указателна аритметика.

Ограничения: 0 < N < 100

Пример:
Вход:
4
1 3 11 9
7 6 12 2
4 10 15 8
16 5 13 14
Изход:
Su-do-ku!
    */
#include <iostream>
#define MAXN 100
using namespace std;
int main(){
    int n;
    int a[MAXN][MAXN], sudoku_sum = 0;
    bool sudoku = true, visited[MAXN] = {0};
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> *(*(a + i) + j);
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if((*(visited + *(*(a + i) + j))) == false){
               (*(visited + *(*(a + i) + j))) = true;
            }else{
                sudoku = false;
                break;
            }
        }
    }
    if(sudoku){
        cout << "Su-do-ku!" << endl;
    }else{
        cout << "not a sudoku, sorry" << endl;
    }
    
    return 0;
}