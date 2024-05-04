#include <stdio.h>

#include <stdbool.h>
bool is_valid_ip(const char * addr) {
    int size_s = 0;
    for(int i = 0; addr[size_s] != '\0'; i++){
        size_s++;
    }
    if(size_s == 0 || addr[0] == '.'){
        return false;
    }
    int dots = 0;
    char next;
    for(int i = 0; i <= size_s; i++){
        if(addr[i] > '9' || addr[i] == ' ' || addr[i] == '-'){
            return false;
        }
        if(i >= 2){
            if((addr[i-2] >= '2' && addr[i-1] >= '5' && addr[i] > '5') && addr[i-2] != '.' && addr[i-1] != '.' && addr[i] != '.'){
                return false;
            }
        }
        if(addr[i] == '.'){
            dots++;
            if(i < size_s){
                if(addr[i+1] == '0'){
                    return false;
                }
            }
        }
    }
    return dots != 3 ? false : true;
}

int main(){
    char *s = "18.256.189.1";
    printf("%s\n", s);
    printf(" Bool:%d ", is_valid_ip(s));
    return 0;
}