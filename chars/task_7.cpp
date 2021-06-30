#include <iostream>
#include <cstring>
#define MAXN 1024
using namespace std;
void selection_sort(char words[MAXN][MAXN], const int words_count){
    for(int i = 0; i < words_count; i++){
        for(int j = i + 1; j < words_count; j++){
            if(strcmp(words[i], words[j]) > 0){
                swap(words[i], words[j]);
            }
        }
    }
}
bool is_valid(const char letter){
    return ((letter >= 'a' && letter <= 'z')||(letter >= 'A' && letter <= 'Z')||(letter >= '0' && letter <= '9')); 
}
void tokenize(char words[MAXN][MAXN], char* a, int& words_count){
    bool is_word = false;
    int start = -1;
    for(int i = 0; i <= strlen(a); i++){
        if(is_valid(a[i]) && !is_word){
            start = i;
            is_word = true;
        }
        if(!is_valid(a[i]) && is_word){
            strncpy(words[words_count], a + start, i - start);
            words_count++;
            is_word = false;
        }
    }
}
int main(){
    char a[MAXN];
    char words[MAXN][MAXN];

    cin.getline(a, MAXN);

    int n = 0;
    tokenize(words, a, n);
    selection_sort(words, n);
    
    for(int i = 0; i < n; i++){
        cout << words[i] << endl;
    }
    return 0;
}
/*
Въведен е символен низ - изречение. Подредете думите в него в лексикографски ред. За дума броим поредица от главни и малки латински 
букви, без пунктуационни знаци и интервали. 

Ограничения: низът не е по-дълъг от 1024 символа.

Пример:

Вход:

I love to eat, but for that I have to cook – I hate this!

Изход:

I

I

I

but

cook

eat

for

hate

have

love

that

this

to 

to
*/