#include <iostream>
#include <cstring>
#define MAXN 100
using namespace std;
int find_str(const char word[], const char str[]){
   int n = strlen(str), m = strlen(word);
   
   bool is_word;
   for(int i=0; i < n - m + 1; i++){
      is_word = true;
      for(int j = 0; j < m && is_word; j++) {
         if(str[i + j] != word[j])
             is_word = false;
     }
     if(is_word) return i;
   }
   return -1;
}
void reverse(char* str, int n){
    for(int i=0, j = n-1; i < j; i++, j--)
        swap(str[i], str[j]);
}
int main(){
    char word[MAXN], str[MAXN]; //избирай по-добри имена
    cin.getline(str, MAXN);
    cin >> word; //нямаш нужда от getline
    int start = find_str(word, str);
    reverse(str+start, strlen(word));
    
    cout << str << endl;
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