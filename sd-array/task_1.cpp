#include <iostream>
using namespace std;

int main(){
    const int MAX = 100;
    int n, a[MAX];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int start = 0, end = 0, max = 0, curr_start = 0, curr_end = 0, curr_max = 1;
    a[n] = a[n-1] + 1;
    for(int i = 0; i < n - 1; i++){
        if(a[i] == a[i + 1]){
            curr_max++;
        }else{
            curr_start = i + 1;
            curr_max = 1;
        }
        if(curr_max > max){
            max = curr_max;
            start = curr_start;
            end = i + 1;
        }
    }

    cout << "max: " << max << " start index: " << start << " end index: " << end << endl;

    return 0;
}



/*
Задача 1. Площадка в масив наричаме поредица еднакви съседни числа. Да се намери дължината на най-дългата площадка в даден масив, съставен от N числа, както и индексите на началото и края й.

Пример:
Вход: 
11
1 1 1 4 5 5 1 3 3 3 3
Изход: 4 7 10

Ограничения: 2 <= N <= 100
*/