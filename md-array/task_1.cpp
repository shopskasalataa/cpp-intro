#include <iostream>
#define MAXN 100
#define MAXM 100
using namespace std;
int main(){
    int n, m, start_row = 0, end_row, start_column = 0, end_column;
    int a[MAXN][MAXM];
    cin >> n;
    cin >> m;
    end_row = n;
    end_column = m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }


    while(start_row < end_row && start_column < end_column){
        // print first row
        for(int i = start_column; i < end_column; i++){
            cout << a[start_row][i] << " ";
        }
        start_row++;
        //print last col
        for(int i = start_row; i < end_row; i++){
            cout <<a[i][end_column - 1] << " ";
        }
        end_column--;
        //print last row
        if(start_row < end_row){
            for(int i = end_column - 1; i >= start_column; i--){
                cout << a[end_row - 1][i] << " ";
            }
            end_row--;
        }
        //print first col
        if(start_column < end_column){
            for(int i = end_row - 1; i >= start_row; i--){
                cout <<a[i][start_column] << " ";
            }
            start_column++;
        }
    }

    return 0;
}

/*
Дадена е квадратна матрица A с размери NxN. Изведете елементите й спираловидно, започвайки от горния ляв ъгъл.

Пример:
Вход:
4
1   2   3   4 
6   10  8   9 
11  2   3   4 
3   7   4   5 
Изход: 
1 2 3 4 9 4 5 4 7 3 11 6 10 8 3 2

Бонус: направете същото с NxM матрица

Вход:
4 5
1   2   3   4   3 
6   10  8   9   6
11  2   3   4   11
3   7   4   5   9

Изход:
1 2 3 4 3 6 11 9 5 4 7 3 11 6 10 8 9 4 3 2
Ограничения: 2 <= N, M <= 100
*/