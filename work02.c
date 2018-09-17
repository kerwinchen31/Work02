#include <stdio.h>
#include <stdlib.h>

int main(){
  unsigned int x = 2100000001;
  char *c = &x;
  
  printf("int in decimal: %u\n", x);
  printf("int in hex: %x\n", x);

  printf("each byte of int:\n");
  for(int i = 0; i < sizeof(x); i++){
    printf("%hhx\n", *c);
    c++;
  }
  
  c = &x;
  for (int i = 0; i < sizeof(x); i++){
    (*c)++;
    c++;
  }

  printf("increment 1, hex: %x\n", x);
  printf("increment 1, decimal: %u\n", x);

  x =  2100000001;
  c = &x;
  
  for (int i = 0; i < sizeof(x); i++){
    (*c) += 16;
    c++;
  }

  printf("increment 16, hex: %x\n", x);
  printf("increment 16, decimal: %u\n", x);

  x =  2100000001;
  c = &x;
  
  for (int i = 0; i < sizeof(x); i++){
    (*c) += 100;
    c++;
  }

  printf("increment 100, hex: %x\n", x);
  printf("increment 100, decimal: %u\n", x);
}
