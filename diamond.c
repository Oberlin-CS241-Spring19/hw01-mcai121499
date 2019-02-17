#include <stdio.h>
int getdigit(char input){
  int x = -1;
  while(EOF != input && input != (int) '\n'){
    if(input >= 48 && input <= 57 ){
     char curr = input;
     x = curr - 48;
     break;
    }
    else{
      input = getchar();
    }
    
  }
  return x;
}

int main(){
  printf("Welcome to diamond, enter a number from 1-9\n");
  int input = getchar();
  char f = input;
  int i = getdigit(f);
  int stars = 1;
  for(int y = 1; y <= i; y++){
    for(int x = 1; x <= i - y; x++){
      printf(" ");
    }
    for(int j = 1; j <= stars; j++){
      printf("*");
    }
    printf("\n");
    stars += 2;
  }
  stars -= 3;
  for(int y1 = 2; y1 < i; y1++){
    for(int x1 = 1; x1 < y1 ; x1++){
      printf(" ");
    }
    for(int z = 1; z < stars; z++){
      printf("*");
    }
    printf("\n");
    stars -= 2;
  }
  for(int z = 1; z < i; z++){
    printf(" ");
  }
  printf("*\n");
  return 0;
}
