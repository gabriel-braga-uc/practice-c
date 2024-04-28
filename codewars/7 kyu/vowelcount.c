#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char * s = "Testando";
    char * vowels = "abcdeABCDE";
    size_t l;
    for(int i = 0; s[i] != '\0'; i++){
        l++;
    }
    printf("%d", l);
    printf("%s", s);
    return 0;
}