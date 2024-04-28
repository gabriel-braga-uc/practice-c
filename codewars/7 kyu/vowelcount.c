#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char * s = "Testando";
    char * vowels = "aeiouAEIOU";
    int awns = 0;
    for(int i = 0; s[i] != '\0'; i++){
        for(int j = 0; vowels[j] != '\0'; j++){
            if(s[i] == vowels[j]){
                awns++;
                break;
            }
        }
    }
    printf("%d", awns);
    return 0;
}