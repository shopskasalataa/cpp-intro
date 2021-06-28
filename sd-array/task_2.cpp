#include <iostream>
using namespace std;

int main(){
    const int MAX = 100;
    int n;
    char a[MAX];

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int start = 0, end = n - 1;
    
    for(int start = 0, end = n - 1; start < end; start++, end--){
        if(a[start] != a[end]){
            cout << "No" << endl;

            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}


/*
Задача 2.Въвежда се поредица от символи с дължина N. Да се провери дали редицата е палиндром.

Пример:
Вход:8
a ! 2 b b 2 ! a
Изход: Yes

Ограничения: 2 <= N <= 100
*/