#include <iostream>
#include <cstring>
#define MAXN 100
using namespace std;
int find_str(char c[], char str[]){
    char word[MAXN];
    int counter = 0;
    for(int i = 0; i < strlen(c); i++){
        if(c[i] == str[counter]){
            counter++;
        }else{
            if(c[i] == ' '){
                if(counter == strlen(str)){
                    return i - strlen(str);
                }else{
                    counter = 0;
                }
            }
        }
    }
    if(counter == strlen(str)){
        return strlen(c) - strlen(str);
    }else{
        return -1;
    }
}
int main(){
    char c[MAXN], str[MAXN];
    cin.getline(c, MAXN);
    cin.getline(str, MAXN);
    int start = find_str(c, str);
    int end = start + strlen(str) - 1;

    while(start < end){
        char temp = c[start];
        c[start] = c[end];
        c[end] = temp;
        start++;
        end--;
    }
    cout << c << endl;
    return 0;
}

/*
Да се напише функция, която проверява низ за търсена дума и функция, която завърта дадена дума. 
Да се напише програма, която прочита от стандартния ред изречение и дума и извежда на стандартния 
изход низът, получен след прилагане на въпросните функции.

Пример:
Вход:
Let me be free!
me
Изход: 
Let em be free!
*/