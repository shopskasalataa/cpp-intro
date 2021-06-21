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
        for(int j = 0; j < n - i - 1; j++){
            if(strcmp(a[j], a[j + 1]) > 0){
                char temp[MAXN];
                strcpy(temp, a[j]);
                strcpy(a[j], a[j + 1]);
                strcpy(a[j + 1], temp);
            }
        }
    }

    for(int i = 0; i < n - 1; i++){
        if(!strcmp(a[i], a[i + 1])){
            curr_count++;
        }else{
            if(curr_count > max_count){
                strcpy(name, a[i]);
                max_count = curr_count;
                curr_count = 1;
            }
        }
    }

    cout << name << " " << max_count;
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
