#include <iostream>
#define MAXN 100
using namespace std;
int main(){
    int n, a[MAXN][MAXN], b[MAXN][MAXN], c[MAXN][MAXN] = {0}, sum = 0, index = 0, counter = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> *(*(a + i) + j);
        }
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> *(*(b + i) + j);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            sum = 0;
            for(int k = 0; k < n; k++){
                sum += (*(*(a + i) + k)) * (*(*(b + k) + j));
            }
            *(*(c + i) + j) = sum;
        }
    }
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << *(*(c + i) + j) << " ";
        }
    }  
    return 0;
}
/*
Дадени са две матрици A и B с размер NxN. Да се изведе матрицата, получена при умножението на двете матрици. 
Задачата да се реши с указателна аритметика.

Ограничения: 0 < N < 100
Обяснение: Матрици се умножават на принципа “ред по колона”. Т.е. ако получената матрица наричаме C, то 
C[i][j]=ΣA[i][k]*B[k][j], 0<=k<N.

Пример:
Вход:4
1 2 3 4
4 3 2 1
3 1 1 2
2 4 4 3

1 0 0 0 
-1 2 0 3
0 1 1 2
0 0 4 5

Изход:
-1 7 19 32 
1 8 6 18 
2 3 9 15 
-2 12 16 35 
*/