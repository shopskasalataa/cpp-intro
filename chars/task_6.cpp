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
void replace(char c[], char original[], char replacer[]){
    int start = find_str(c, original);
    char new_c[MAXN];
    for(int i = 0; i < start; i++){
        new_c[i] = c[i];
    }
    int count = 0;
    for(int i = start; i < start + strlen(replacer); i++){
        new_c[i] = replacer[count];
        count++;
    }
    int i = start + strlen(original);
    int j = start + strlen(replacer);
    do{
        new_c[j] = c[i];
        i++;
        j++;
    }while(c[i] != '\0');
    
    cout << new_c;
}
int main(){
    char c[MAXN], original[MAXN], replacer[MAXN];
    cin.getline(c, MAXN);
    cin >> original >> replacer;
    
    replace(c, original, replacer);

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