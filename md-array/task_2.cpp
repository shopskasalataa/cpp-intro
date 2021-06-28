#include <iostream>
#define MAXN 100
#define MAXM 100
using namespace std;
int main(){
    int n, m, p, q, max_sum = 0, curr_sum = 0, s_r = 0, s_c = 0;
    cin >> n >> m;
    int a[MAXN][MAXM];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }

    cin >> p >> q;
    
    for(int start_row = 0; start_row < n - p + 1; start_row++){
        for(int start_column = 0; start_column < m - q + 1; start_column++){
            int sum = 0;
            for(int i=0; i<p; i++){
                for(int j=0; j<q; j++){
                    sum += a[start_row + i][start_column + j];
                }
            }
            max_sum = (sum > max_sum ? sum : max_sum);
        }
    }

    cout << max_sum << endl;
    return 0;
}
/*
Дадена е правоъгълна матрица А с размери NxM, съставена от цели числа. Дадени са числата P и Q 
(0<P<N, 0<Q<M). Намерете най-голямата сума, съставена от подматрица на А с размери PxQ.

Пример:
Вход:
 4 6
 1 2  3 4   5   6
 4 5 -1 6   7   8
-1 3  9 10  19  3
 0 4  5 8  -13  2

 2 3
Изход: 53
*/