#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(int argc, char**argv){
  int input = getchar();
  if(argc == 1){
  while(input != EOF ){
    int i=(input + ((UCHAR_MAX + 1)/2));
    putchar(i);
    input = getchar();
  } 
  }
  else{
    while(input != EOF){
      int shift = atoi(argv[1]);
      int i = input + shift;
      putchar(i);
      input = getchar()
    }
  }
      
   return 0;
}
