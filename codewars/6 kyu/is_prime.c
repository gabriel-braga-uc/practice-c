#include <stdbool.h>
bool is_prime(int num)
{
  if(num > 2){
    int i = 2;
    while (i*i <= num){
      if(num % i == 0){
        return false;
      }
      i++;
    }
    return true;
  }
  else{
    return num == 2 ? true : false;
  }
}