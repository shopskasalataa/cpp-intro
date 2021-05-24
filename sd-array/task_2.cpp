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
    while(start < end){
        if(a[start] != a[end]){
            cout << "No" << endl;
            return 0;
        }
        start++;
        end--;
    }

    cout << "Yes" << endl;

    return 0;
}


/*
Задача 2.Въвежда се поредица от символи с дължина N. Да се провери дали редицата е палиндром.

Пример:Вход:8a ! 2 b b 2 ! aИзход: Yes

Ограничения: 2 <= N <= 100
*/