/*Given two arrays a and b write a function comp(a, b) (orcompSame(a, b)) that checks whether the two arrays have the "same" elements, with the same
multiplicities (the multiplicity of a member is the number of times it appears). "Same" means, here, that the elements in b are the elements in a
squared, regardless of the order.*/
#include <stdbool.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>
bool comp(const int a[/*n*/], const int b[/*n*/], size_t n)
{ //www
  int length_a = sizeof(*a)/sizeof(a[0]);
  int length_b = sizeof(*b)/sizeof(b[0]);
  printf("%i %i \n", length_a, length_b);
  if((length_a == 0 || length_b == 0)){
    printf("jajajajaa");
    return(false);
  }
  for(int i = 0; i <= length_a; i++){
      for(int j = 0; j <= length_b; j++){
        printf("%i", a[i]);
        printf("%i", b[j]);
    }
  }
}
int main(){
  int a[] = {1, 2, 3};
  int b[] = {6, 9, 1, 33};
  comp(a, b, 123);
    return(0);
}