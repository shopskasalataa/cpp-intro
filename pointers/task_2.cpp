#include <iostream>
#define MAXN 100
#define MAXM 100
using namespace std;
int main(){
    int n, m, a[MAXN], b[MAXM], counter = 0;
    
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> *(a + i);
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> *(b + i);
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < m; j++){
            if((*(a + i) == *(b + j))){
                counter++;
            }
        }
    }
    cout << counter << endl;
    return 0;
}
/*
Дадени са два масива – A и B, съответно с размери N и M. Да се намери броя равенства A[i]=B[j], където 0 <= i < N, i < j < M. Задачата да се реши с указателна аритметика.

Ограничения: 0 < N, M < 100

Пример:
Вход:
6
16 7 27 38 14 5
11
1 2 16 7 5 16 83 3 27 8 16
Изход:
5
*/
/*
for(int i = 0; i < n; i++){
        cin >> *(a + i);
        *(visited + *(a + i)) = true;
        cout << *(a + i) << " " << *(visited + *(a + i)) << endl;
    }
    cin >> m;
    for(int i = 0; i < m; i++){
        cin >> *(b + i);
        if(*(visited + *(b + i)) == true){
            cout << *(b + i) << endl;
            counter++;
        }
    }
*/