#include <iostream>
#include <cstring>
#include <algorithm>
#define MAXN 100
using namespace std;
int main(){
    int n, max_count = 0, curr_count = 1;
    char a[MAXN][MAXN], name[MAXN];
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    
    for(int i = 0; i < n - 1; i++){
        curr_count = 1;

        for(int j = i + 1; j < n; j++){
            if(strcmp(a[i], a[j]) == 0){
                curr_count++;
            }
        }

        if(curr_count > max_count){
            max_count = curr_count;
            strcpy(name, a[i]);
        }
    }

    cout << name << " " << max_count << endl;
    return 0;
}
/*
Даден е списък от N имена. Да се намери най-често срещаното име в него и броя на срещанията му.

Пример:
Вход:
8
Anna
Maria
Peter
Maria
Anna
Anna
Ivan
Katya

Изход: Anna 3
*/
