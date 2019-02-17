#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
  int input = getchar();
  
  while(input != (int) '\n' && input != EOF ){
    int i=(input + ((UCHAR_MAX + 1)/2));
    if(i > UCHAR_MAX){
      i = i % UCHAR_MAX;
    }
    putchar(i);
    input = getchar();
  } 
   return 0;
}
