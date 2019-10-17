#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main() {

  char a[] = "banana";
  char *ap = a;
  struct fruit as = createStruct(1,a);
  struct fruit *asp = &as;
  printStruct(asp);
  modifyStruct(asp, 2, a);
  printStruct(asp);

  // char b[] = "strawberry";
  // char *bp = b;
  // struct fruit bs = createStruct(2,bp);
  // struct fruit *bsp = &bs;


  // fruits.price = 1;
  // char *f = "banana";
  // fruits.name = f;
  //
  // desserts.price = 5;
  // char *d = "cake";
  // desserts.name = d;
  //
  // printf("fruits: %d\t%s\n", fruits.price, fruits.name);
  // printf("desserts: %d\t%s\n", desserts.price, desserts.name);

  return 0;
}
