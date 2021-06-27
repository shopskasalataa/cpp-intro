#include <iostream>
#include <cstring>
#define MAXN 1024
#define MAXS 100
using namespace std;
void str_cat(char a[MAXN][MAXS], int n){
    char string[MAXN * (MAXS + 1)];
    strcpy(string, "");

    // не е нужно да съхраняваме думичките, просто можем да изведем масива от чарове отзад напред
    for(int i = n - 1; i >= 0; i--){
        strcat(string, a[i]);
        if(i > 0){
            strcat(string, " ");
        }
    }

    cout << string << endl;
}
int main(){
    char a[MAXN][MAXS];
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    str_cat(a, n);

    return 0;
}
/*
Даден е списък от N на брой думи. Да се напише функция, която връща изречението, получено от конкатенирането 
на всички думи, започвайки отзад напред.

Пример:
Вход:
8
faster
be
to
computer
my
like
would
I

Изход: I would like my computer to be faster

Ограничения:2 < N < 1024 Думите съдържа не повече от 100 символа
*/
