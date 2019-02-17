#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
  int input = getchar();
  
  while(input != EOF ){
    int i=(input + ((UCHAR_MAX + 1)/2));
    putchar(i);
    input = getchar();
  } 
   return 0;
}
