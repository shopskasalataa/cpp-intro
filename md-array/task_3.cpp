#include <iostream>
#define MAXN 10
using namespace std;
int main(){
    bool is_palindrome = true;
    char a[MAXN][MAXN];
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n / 2; i++){
        if(a[i][i] != a[n - i - 1][n - i - 1]){
            is_palindrome = false;
            break;
        }
        if(a[i][n - i - 1] != a[n - i - 1][i]){
            is_palindrome = false;
            break;
        }
    }
    for(int i = 0; i < n / 2; i++){
        for(int j = 0; j < n / 2; j++){
            if(a[i][j] != a[i][n - j - 1]){
                is_palindrome = false;
                break;
            }
            if(a[j][i] != a[n - j - 1][i]){
                is_palindrome = false;
                break;
            }
        }
    }
    is_palindrome ? cout << "yes" << endl : cout << "no" << endl;
    return 0;
}
/*
Изхождайки от определението за магически квадрат (сумата по редове, колони и двата диагонала да е равна), 
ще дефинираме магически палиндром като матрица, съдържаща палиндроми по редовете, колоните и двата си 
диагонала. По зададено число N (0<N<10) определете дали дадена матрица от символи (размер NxN) е магически 
палиндром. 

Пример 1:
Вход: 3
a b a
b a b
a b a
Изход: Yes
Пример 2:
Вход:4
a b b a
9 a a 9
k o k o
a b b a
Изход: No
*/