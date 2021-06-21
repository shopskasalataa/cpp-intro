#include <iostream>
#include <cstring>
#include <algorithm>
#define MAXN 100
using namespace std;
int main(){
    char c[MAXN];
    int a[MAXN], count = 0;
    cin >> c;
    int l = strlen(c), n = 0, dec = 1;
    for(int i = 0; i < l; i++){
        if(isdigit(c[i])){
            int number = (int)(c[i] - '0');
            a[count] = number;
            count++;
        }
    }
    
    sort(a, a + count);
    
    for(int i = count - 1; i >= 0; i--){
        cout << a[i];
    }
    
    return 0;
}

/*
Даден е низ, в който се съдържат различни букви, символи и цифри. Да се изведе най-голямото число, 
образувано от срещнатите цифри в низа.

Пример:
Вход: 
jdhg81sjg37sg1!#hd466
Изход: 8766431

Обяснение на примера: в низа се срещат цифрите 8, 1, 3, 7, 1, 4, 6 и 6. 

Ограничения: низът съдържа не повече от 100 символа
*/