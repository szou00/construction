#include <stdio.h>
#include <stdlib.h>

//Create a struct that has at least 2 data members, one must be a string.
struct fruit {int price; char *name;};

//Write a function that returns an example of your struct when run. This should not return the same values every time.
struct fruit createStruct(int p, char *n) {
  struct fruit fruits;
  fruits.price = p;
  fruits.name = n;
  return fruits;
}

//Write a function that prints out variables of your structs type in a reasonable way.
void printStruct(struct fruit *f) {
  printf("the price of %s is %d dollars\n", f->name, f->price);
}

//Write a function that modifies values of your struct's type.
void modifyStruct(struct fruit *f, int p, char *n) {
  f->price = p;
  f->name = n;
}

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


}
