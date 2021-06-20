#include <iostream>
#define MAXN 100
#define MAXM 100
using namespace std;
int main(){
    int n, m, s_r = 0, e_r, s_c = 0, e_c;
    int a[MAXN][MAXM];
    cin >> n;
    cin >> m;
    e_r = n;
    e_c = m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }


    while(s_r < e_r && s_c < e_c){
        // print first row
        for(int i = s_c; i < e_c; i++){
            cout << a[s_r][i] << " ";
        }
        s_r++;
        //print last col
        for(int i = s_r; i < e_r; i++){
            cout <<a[i][e_c - 1] << " ";
        }
        e_c--;
        //print last row
        if(s_r < e_r){
            for(int i = e_c - 1; i >= s_c; i--){
                cout << a[e_r - 1][i] << " ";
            }
            e_r--;
        }
        //print first col
        if(s_c < e_c){
            for(int i = e_r - 1; i >= s_r; i--){
                cout <<a[i][s_c] << " ";
            }
            s_c++;
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