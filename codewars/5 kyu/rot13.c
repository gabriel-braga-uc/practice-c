#include <stdio.h>

#include <stdlib.h>
#include <stddef.h>
char *rot13(const char *src){
    int size_s = 0;
    for(int i = 0; src[i] != '\0'; i++){
        size_s++;
    }
    char *out_s = (char*)calloc(size_s, sizeof(char));
    out_s[size_s] = '\0';
    int aux = 0;
    for(int i = 0; i < size_s; i++){
        if(src[i] >= 97 && src[i] <= 122){
            if(src[i] + 13 > 122){
                out_s[i] = src[i] - 13;
            }
            else{
                out_s[i] = src[i] + 13;
            }
        }else if(src[i] >= 65 && src[i] <= 90){
            if(src[i] + 13 > 90){
                out_s[i] = src[i] - 13;
            }
            else{
                out_s[i] = src[i] + 13;
            }
        }
        else{
            out_s[i] = src[i];
        }
    }
    return(out_s);
}

int main(){
    char * rot;
    rot = rot13("##!Hello! $11$ World!!!?");
    printf("%s", rot);
}
