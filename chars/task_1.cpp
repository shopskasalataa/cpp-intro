/*
Зададена е непрекъсната поредица от символи. Да се състави хистограма на срещанията на всеки символ и да се 
изведе на екрана.

Пример:
Вход:
..iliket,!go2231oUtwithFrie4n2dsan2dateK432FCp!together.

Изход:
.  3
i  4
l  1
k 1
e 5
t  6
,  1
!  2
g 2
o  3
2  5
3  2
1  1
U  1
w  1
h  2
F  2
r   2
4  2
n  2
d  2
s  1
a  2
K  1
C  1
p  1

Ограничения: поредицата съдържа не повече от 100 символа
*/
#include <iostream>
#include <cstring>
#define MAXN 100
#define MAXUSED 257
using namespace std;
int main(){
    char c[MAXN];
    bool used[MAXUSED] = {0};
    cin >> c;
    for(int i = 0; i < strlen(c); i++){
        char a = c[i];
        int count = 0;
        if(used[(int)a] == false){
            for(int j = 0; j < strlen(c); j++){
                if(a == c[j]){
                count++;
                }
            }
            cout << a << " " << count << endl;
            used[(int)a] = true;
        }
    }
    return 0;
}