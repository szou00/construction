#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

//Create a struct that has at least 2 data members, one must be a string.
//in the functions.h file

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
