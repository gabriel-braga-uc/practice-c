#include<stdio.h>
int main(){
    int x = 123;
    char www[9999];
    sprintf(www, "%d", x);
    printf("%s",  www);
}