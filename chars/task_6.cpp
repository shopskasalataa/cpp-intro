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
void replace(char* str, const char* original, const char* replacer){
    int current_position = 0;
    char* tmp = new char[strlen(str) * strlen(replacer)]; // worst case scenario
    strcpy(tmp, "");
    
    int position;
    while((position = find_str(original, str+current_position)) != -1) { //малко е странно, знам
        strncat(tmp, str + current_position, position);
        strcat(tmp, replacer);
        current_position = position + strlen(original);
    }
    strcat(tmp, str + current_position);
    strcpy(str, tmp);

    delete tmp;
}
int main(){
    char c[MAXN], original[MAXN], replacer[MAXN];
    cin.getline(c, MAXN);
    cin >> original >> replacer;
    
    replace(c, original, replacer);
    
    cout << c << endl;
    
    return 0;
}
/*
Да се напише функция replace, която приема низ, търсена дума и дума-заместник и заменя всяко срещане на 
търсената дума в низа с думата-заместник.Да се напише програма, която прочита от стандартния ред изречение 
и две думи и извежда на стандартния изход низът, получен след прилагане на въпросната функция.

Пример:
Вход: 
Kiro loves cats and dogs
cats programming

Изход: 
Kiro loves programming and dogs
*/