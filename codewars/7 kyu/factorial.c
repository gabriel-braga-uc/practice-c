#include <stdio.h>

int factorial(unsigned n)
{
    if(n <= 1){
        return 1;
    }
    else{
        return(n*(factorial(n-1)));
    }
}

int main(){
    printf("%d", factorial(11));
}